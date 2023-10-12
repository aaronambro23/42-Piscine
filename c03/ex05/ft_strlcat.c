/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:15:02 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/06 11:22:34 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (i < size && dest[i])
	{
		i++;
	}
	while ((i + n + 1) < size && src[n])
	{
		dest[i + n] = src[n];
		n++;
	}
	if (i != size)
	{
		dest[i + n] = '\0';
	}
	return (i + ft_strlen(src));
}

#include <stdio.h>

int	main(void)
{
	char arr1[] = " is better than tudor at fifa";
	char arr2[] = "Aaron";
	printf("Initial arr2: %s\n", arr2);

	unsigned int result = ft_strlcat(arr2, arr1, 10);
	printf("Concatenated arr2: %s\n", arr2);
	printf("Result: %u\n", result);

	return (0);
}