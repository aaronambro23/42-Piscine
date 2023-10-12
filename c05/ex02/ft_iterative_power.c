/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:18:41 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/09 22:32:39 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	if (power < 0)
		return (0);
	i = 0;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

// #include <stdio.h>

// int	ft_iterative_power(int nb, int power);

// int	main(void)
// {
// 	int	result;

// 	int base, exponent;
// 	printf("Enter the base number: ");
// 	scanf("%d", &base);
// 	printf("Enter the exponent: ");
// 	scanf("%d", &exponent);
// 	result = ft_iterative_power(base, exponent);
// 	if (exponent < 0)
// 	{
// 		printf("%d^%d is undefined for negative exponents.\n", base, exponent);
// 	}
// 	else
// 	{
// 		printf("%d^%d = %d\n", base, exponent, result);
// 	}
// 	return (0);
// }
