/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:09:54 by aaambros          #+#    #+#             */
/*   Updated: 2023/09/30 13:25:07 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if ((*str >= 'A' || *str <= 'Z') && (*str < 'a' || *str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int	ft_str_is_lowercase(char *str);

// int	main(void)
// {
// 	char test1[] = "HelloWorld";
// 	char test2[] = "hellojdhfjkshdf";
// 	char test3[] = "ccc12345";
// 	char test4[] = "";
// 	printf("Test 1: %s is alphabetic: %d\n", test1, ft_str_is_lowercase(test1));
// 	printf("Test 2: %s is alphabetic: %d\n", test2, ft_str_is_lowercase(test2));
// 	printf("Test 3: %s is alphabetic: %d\n", test3, ft_str_is_lowercase(test3));
// 	printf("Test 4: %s is alphabetic: %d\n", test4, ft_str_is_lowercase(test4));
// 	return (0);
// }
