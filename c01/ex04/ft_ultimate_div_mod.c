/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:40:42 by aaambros          #+#    #+#             */
/*   Updated: 2023/09/26 19:39:34 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_quotient;
	int	temp_remainder;

	temp_quotient = *a / *b;
	temp_remainder = *a % *b;
	*a = temp_quotient;
	*b = temp_remainder;
}
