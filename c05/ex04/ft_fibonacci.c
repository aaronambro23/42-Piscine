/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:49:03 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/09 23:20:24 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>

// int	ft_fibonacci(int index);

// int	main(void)
// {
// 	int	n;
// 	int	result;

// 	printf("Enter the index of the Fibonacci sequence: ");
// 	scanf("%d", &n);
// 	result = ft_fibonacci(n);
// 	if (result == -1)
// 	{
// 		printf("Invalid index. Index must be non-negative.\n");
// 	}
// 	else
// 	{
// 		printf("Fibonacci number at index %d is %d\n", n, result);
// 	}
// 	return (0);
// }