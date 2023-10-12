/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:57:51 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/02 17:23:13 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int num1 = 50;
	int num2 = 52;

	// write(1, "Before swap: num1 = 97, num2 = 99\n", 32);
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, "\n", 1);

	ft_swap(&num1, &num2);

	// write(1, "After swap: num1 = ", 21);
	write(1, &num1, 1);
	// write(1, ", num2 = ", 9);
	write(1, &num2, 1);
	write(1, "\n", 1);

	return (0);
}