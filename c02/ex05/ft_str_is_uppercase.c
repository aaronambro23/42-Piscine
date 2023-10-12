/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:17:48 by aaambros          #+#    #+#             */
/*   Updated: 2023/09/30 14:07:48 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if ((*str >= 'a' || *str <= 'z') && (*str < 'A' || *str > 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int	ft_str_is_uppercase(char *str);

// int	main(void)
// {
// 	char test1[] = "HELLOWORLDDDDDDDD";
// 	char test2[] = "JKDSFHKJSHDFKSAD";
// 	char test3[] = "HELLrhgjfngkjdnf";
// 	char test4[] = "";
// 	printf("Test 1: %s is alphabetic: %d\n", test1, ft_str_is_uppercase(test1));
// 	printf("Test 2: %s is alphabetic: %d\n", test2, ft_str_is_uppercase(test2));
// 	printf("Test 3: %s is alphabetic: %d\n", test3, ft_str_is_uppercase(test3));
// 	printf("Test 4: %s is alphabetic: %d\n", test4, ft_str_is_uppercase(test4));
// 	return (0);
// }
