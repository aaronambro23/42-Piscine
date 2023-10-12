/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:29:03 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/04 21:32:36 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	int		n_values[] = {5, 10, 15, 20};
	int		n;
	char	destination[20];

	char source[] = "Hello, World!";
	for (int i = 0; i < sizeof(n_values) / sizeof(n_values[0]); i++)
	{
		n = n_values[i];
		ft_strncpy(destination, source, n);
		destination[n] = '\0';
		printf("Copy with n = %d: %s\n", n, destination);
	}
	return (0);
}
