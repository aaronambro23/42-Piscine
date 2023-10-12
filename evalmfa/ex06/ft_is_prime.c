/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:18:22 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/11 19:11:11 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	w;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	w = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += w;
		w = 6 - w;
	}
	return (1);
}

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	num;

	printf("Enter a number: ");
	scanf("%d", &num);
	if (ft_is_prime(num))
	{
		printf("%d is a prime number.\n", num);
	}
	else
	{
		printf("%d is not a prime number.\n", num);
	}
	return (0);
}
