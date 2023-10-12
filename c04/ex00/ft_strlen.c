/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:37:36 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/04 14:23:46 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*message;
// 	int		length;

// 	message = "Hello, World!";
// 	length = ft_strlen(message);
// 	write(1, "Length of the string: ", 22);
// 	// Write the message to the standard output
// 	write(1, &length, sizeof(length)); // Write the length as an integer
// 	return (0);
// }