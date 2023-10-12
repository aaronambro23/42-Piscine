/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:16:47 by aaambros          #+#    #+#             */
/*   Updated: 2023/09/30 14:34:57 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>

// char	*ft_strupcase(char *str);

// int	main(void)
// {
// 	char test[] = "Hello, World!";
// 	printf("Original String: %s\n", test);
// 	ft_strupcase(test);
// 	printf("Uppercase String: %s\n", test);
// 	return (0);
// }
