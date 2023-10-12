/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:37:30 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/04 22:21:02 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

// #include <stdio.h>

// int	ft_strcmp(char *s1, char *s2);

// int	main(void)
// {
// 	int	result;

// 	char str1[] = "aaaa";
// 	char str2[] = "aaaa";
// 	result = ft_strcmp(str1, str2);
// 	printf("Difference: %d\n", result);
// 	return (0);
// }
