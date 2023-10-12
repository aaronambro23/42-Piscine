/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sting.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 23:09:16 by polenyc           #+#    #+#             */
/*   Updated: 2023/10/11 19:29:11 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_number(char ch)
{
	if (ch < '0' || ch > '9')
		return (0);
	return (1);
}

int	ft_isspace(int c)
{
	if (c == ' ' || c == 't' || c == '\n')
		return (1);
	if (c == '\f' || c == '\r' || c == '\v')
		return (1);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, sizeof(char));
		++str;
	}
}

void	ft_putchar(char ch)
{
	write(1, &ch, sizeof(char));
}
