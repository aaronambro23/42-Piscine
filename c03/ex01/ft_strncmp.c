/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:42:47 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/01 14:16:03 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

// #include <stdio.h>

// int	ft_strncmp(char *s1, char *s2, unsigned int n);

// int	main(void)
// {
// 	int	result1;
// 	int	result2;

// 	char str1[] = "Hello, World!";
// 	char str2[] = "Hello, Universe!";
// 	result1 = ft_strncmp(str1, str2, 5);
// 	result2 = ft_strncmp(str1, str2, 7);
// 	printf("Result1: %d\n", result1);
// 	printf("Result2: %d\n", result2);
// 	if (result1 < 0)
// 		printf("str1 is less than str2 in the first 5 characters\n");
// 	else if (result1 > 0)
// 		printf("str1 is greater than str2 in the first 5 characters\n");
// 	else
// 		printf("str1 is equal to str2 in the first 5 characters\n");
// 	if (result2 < 0)
// 		printf("str1 is less than str2 in the first 7 characters\n");
// 	else if (result2 > 0)
// 		printf("str1 is greater than str2 in the first 7 characters\n");
// 	else
// 		printf("str1 is equal to str2 in the first 7 characters\n");
// 	return (0);
// }
