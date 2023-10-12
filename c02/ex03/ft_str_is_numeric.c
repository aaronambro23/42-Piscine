/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:46:40 by aaambros          #+#    #+#             */
/*   Updated: 2023/09/30 14:06:09 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	ft_str_is_numeric(char *str);

// int	main(void)
// {
// 	char test1[] = "HelloWorld";
// 	char test2[] = "7326478j23648723";
// 	char test3[] = "12345";
// 	char test4[] = "";
// 	printf("Test 1: %s is alphabetic: %d\n", test1, ft_str_is_numeric(test1));
// 	printf("Test 2: %s is alphabetic: %d\n", test2, ft_str_is_numeric(test2));
// 	printf("Test 3: %s is alphabetic: %d\n", test3, ft_str_is_numeric(test3));
// 	printf("Test 4: %s is alphabetic: %d\n", test4, ft_str_is_numeric(test4));
// 	return (0);
// }
