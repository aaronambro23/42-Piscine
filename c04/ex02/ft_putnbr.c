/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:49:57 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/04 14:23:17 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	number;

	number = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
	}
	ft_putchar(number % 10 + '0');
}

// int	main(void)
// {
// 	ft_putnbr(-42);
// 	return (0);
// }