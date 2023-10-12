/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:42:53 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/05 15:15:56 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	if (!base || !base[0] || !base[1])
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

void	ft_putnbr_base(long long int nbr, char *base)
{
	int	base_len;

	if (!is_valid_base(base))
		return ;
	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= base_len)
	{
		ft_putnbr_base(nbr / base_len, base);
	}
	write(1, &base[nbr % base_len], 1);
}

#include <stdio.h>

int	main(void)
{
	int	number;

	char *base = "poneyvif"; // Replace with your desired base
	number = 250;
	// Replace with the number you want to convert
	ft_putnbr_base(number, base);
	write(1, "\n", 1);
	return (0);
}
