/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:07:57 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/09 22:20:07 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}

// #include <stdio.h>

// int	ft_recursive_factorial(int nb);

// int	main(void)
// {
// 	int	num;
// 	int	factorial;

// 	printf("Enter a non-negative integer: ");
// 	scanf("%d", &num);
// 	factorial = ft_recursive_factorial(num);
// 	if (factorial == 0 && num < 0)
// 	{
// 		printf("Factorial is not defined for negative numbers.\n");
// 	}
// 	else
// 	{
// 		printf("The factorial of %d is: %d\n", num, factorial);
// 	}
// 	return (0);
// }