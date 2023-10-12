/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 23:23:18 by polenyc           #+#    #+#             */
/*   Updated: 2023/10/11 19:26:15 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

int	ft_atoi_ad(char *str)
{
	int	result;
	int	dec;

	dec = 10;
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result *= dec;
		result += (*str - '0');
		++str;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	count;
	int	result;

	result = 0;
	count = 0;
	while (ft_isspace((int)*str))
		++str;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			++count;
		++str;
	}
	if (*str < '0' || *str > '9')
		return (0);
	result = ft_atoi_ad(str);
	if (count % 2 > 0)
		result = -result;
	return (result);
}
