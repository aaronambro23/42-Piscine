/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 00:08:52 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/11 19:58:58 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_sqrt(int nb)
// {
// 	int	i;

// 	i = 2;
// 	while (i * i <= nb && i < nb / 2)
// 	{
// 		if (i * i == nb)
// 		{
// 			return (i);
// 		}
// 		i += 2;
// 	}
// 	return (0);
// }

int	ft_sqrt(int nb)
{
	int	x;
	int	y;

	if (nb <= 0)
		return (0);
	x = nb;
	y = (x + 1) / 2;
	while (y < x)
	{
		x = y;
		y = (x + nb / x) / 2;
	}
	if (x * x == nb)
		return (x);
	else
		return (0);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	ft_sqrt(int nb);

// #include <time.h> // Include the time.h library for timing

// int	main(int argc, char **argv)
// {
// 	int		result;
// 	int		nb;
// 	clock_t	start;
// 	clock_t	end;
// 	double	elapsed_time;

// 	if (argc != 2)
// 	{
// 		printf("Usage: %s <number>\n", argv[0]);
// 		return (1);
// 	}
// 	nb = atoi(argv[1]);
// 	// Start the timer
// 	start = clock();
// 	result = ft_sqrt(nb);
// 	// Stop the timer
// 	end = clock();
// 	if (result != 0)
// 	{
// 		printf("Square root of %d is %d\n", nb, result);
// 	}
// 	else
// 	{
// 		printf("No integer square root for %d\n", nb);
// 	}
// 	// Calculate the elapsed time in seconds
// 	elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
// 	printf("Elapsed time: %.4f seconds\n", elapsed_time);
// 	return (0);
// }
