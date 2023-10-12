/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:34:19 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/06 12:29:40 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int	ft_str_is_alpha(char *str);

// int	main(void)
// {
// 	char test1[] = "HelloWorld";
// 	char test2[] = "Hello123";
// 	char test3[] = "12345";
// 	char test4[] = "";
// 	printf("Test 1: %s is alphabetic: %d\n", test1, ft_str_is_alpha(test1));
// 	printf("Test 2: %s is alphabetic: %d\n", test2, ft_str_is_alpha(test2));
// 	printf("Test 3: %s is alphabetic: %d\n", test3, ft_str_is_alpha(test3));
// 	printf("Test 4: %s is alphabetic: %d\n", test4, ft_str_is_alpha(test4));
// 	return (0);
// }
