/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:15:27 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/03 13:28:31 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// char	*ft_strncat(char *dest, char *src, unsigned int nb);

// int	main(void)
// {
// 	unsigned int nb;

// 	char dest[10] = "Hello";
// 	char src[] = "World";
// 	nb = 4;
// 	printf("Before ft_strncat: dest = \"%s\"\n", dest);
// 	ft_strncat(dest, src, nb);
// 	printf("After ft_strncat: dest = \"%s\"\n", dest);
// 	return (0);
// }