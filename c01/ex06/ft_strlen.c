/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 22:01:45 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/02 14:24:32 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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
// 	char *message;
// 	int length;

// 	message = "Hello, World!";
// 	length = ft_strlen(message);
// 	write(1, "Length of the string: ", 22);

// 	// Convert the integer length to a string representation
// 	char length_str[12]; // Assuming a maximum of 11 digits for the length
// 	sprintf(length_str, "%d", length);

// 	// Write the length as a string to the standard output
// 	write(1, length_str, ft_strlen(length_str));
// 	return (0);
// }
