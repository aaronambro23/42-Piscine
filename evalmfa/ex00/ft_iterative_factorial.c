/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:43:57 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/09 22:19:53 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	if (nb < 0)
		return (0);
	i = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

// #include <stdio.h>

// int	ft_iterative_factorial(int nb);

// int	main(void)
// {
// 	int	n;
// 	int	result;

// 	printf("Enter a non-negative integer: ");
// 	scanf("%d", &n);
// 	result = ft_iterative_factorial(n);
// 	if (result == 0)
// 		printf("Invalid input.\n");
// 	else
// 		printf("Factorial of %d is %d\n", n, result);
// 	return (0);
// }