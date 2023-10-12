/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:40:43 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/04 21:07:09 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size > 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

#include <stdio.h>

int	main(void)
{
	unsigned int	copied_len;
	char			dest[20];

	char src[] = "jkdsafhkjsdnf";
	copied_len = ft_strlcpy(dest, src, sizeof(dest));
	printf("Copied String: %s\n", dest);
	printf("Length of Copied String: %u\n", copied_len);
	return (0);
}
