/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:16:34 by aaambros          #+#    #+#             */
/*   Updated: 2023/09/24 15:26:37 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_putchar((char)(num1 / 10 + '0')); 
			ft_putchar((char)(num1 % 10 + '0')); 
			ft_putchar(' ');
			ft_putchar((char)(num2 / 10 + '0')); 
			ft_putchar((char)(num2 % 10 + '0')); 
			if (num1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	ft_putchar('/n');
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
