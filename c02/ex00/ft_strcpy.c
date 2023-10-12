/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:44:17 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/06 12:29:06 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

// int	main(void)
// {
// 	char arr[] = "hello dskjfhsadkjgfhsadiufhksjadfsadf";
// 	char arr2[] = "";
// 	ft_strcpy(arr2, arr);
// 	printf("%s", arr2);
// 	return (0);
// }
