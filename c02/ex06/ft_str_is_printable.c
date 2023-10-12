/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:09:36 by aaambros          #+#    #+#             */
/*   Updated: 2023/09/30 14:15:07 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	ft_str_is_printable(char *str);

// int	main(void)
// {
// 	char test1[] = "HelloWorld";
// 	char test2[] = "7326478j23648723";
// 	char test3[] = "\n";
// 	char test4[] = "";
// 	printf("Test 1: %s is alphabetic: %d\n", test1, ft_str_is_printable(test1));
// 	printf("Test 2: %s is alphabetic: %d\n", test2, ft_str_is_printable(test2));
// 	printf("Test 3: %s is alphabetic: %d\n", test3, ft_str_is_printable(test3));
// 	printf("Test 4: %s is alphabetic: %d\n", test4, ft_str_is_printable(test4));
// 	return (0);
// }
