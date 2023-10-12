/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:33:30 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/09 22:48:33 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
	{
		return (1);
	}
	result = (nb * ft_recursive_power(nb, power - 1));
	return (result);
}

// #include <stdio.h>

// int	ft_recursive_power(int nb, int power);

// int	main(void)
// {
// 	int	result;

// 	int base, exponent;
// 	printf("Enter the base number: ");
// 	scanf("%d", &base);
// 	printf("Enter the exponent: ");
// 	scanf("%d", &exponent);
// 	result = ft_recursive_power(base, exponent);
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
