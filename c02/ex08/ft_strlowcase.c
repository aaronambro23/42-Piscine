/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:38:56 by aaambros          #+#    #+#             */
/*   Updated: 2023/09/30 14:44:20 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>

// char	*ft_strlowcase(char *str);

// int	main(void)
// {
// 	char test[] = "HELLO, WOrlgHbYoI!";
// 	printf("Original String: %s\n", test);
// 	ft_strlowcase(test);
// 	printf("Lowercase String: %s\n", test);
// 	return (0);
// }
