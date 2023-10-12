/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 22:44:24 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/12 02:18:04 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }
// void	ft_putstr(char *str)
// {
// 	while (*str != '\0')
// 	{
// 		ft_putchar(*str);
// 		str++;
// 	}
// }

// void	strcmp(char *str1, char *str2)
// {
// 	while (*str1 || *str2)
// 	{
// 		if (*str1 != *str2)
// 		{
// 			return (*str1 - *str2);
// 		}
// 		str1++;
// 		str2++;
// 	}
// 	return (0);
// }

// void	ft_swap(char **a, char **b)
// {
// 	char	*temp;

// 	temp = *a;
// 	*a = *b;
// 	*b = temp;
// }

// // int	main(int argc, char **argv)
// // {
// // 	int	i;
// // 	int	j;

// // 	i = 1;
// // 	while (i < argc - 1)
// // 	{
// // 		j = 1;
// // 		while (j < argc - 1)
// // 		{
// // 			if (strcmp(argv[j], argv[j + 1] > 1))
// // 			{
// // 				ft_swap(&argv[j], &argv[j + 1] > 1);
// // 			}
// // 			j++;
// // 		}
// // 		i++;
// // 		j = 1;
// // 	}
// // 	while (j < argc)
// // 	{
// // 		ft_putstr(argv[j]);
// // 		ft_putchar('\n');
// // 		j++;
// // 	}
// // 	return (0);
// // }
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 1)
			{
				ft_swap(&argv[j], &argv[j + 1]);
			}
			j++;
		}
		i++;
	}
	j = 1;
	while (j < argc)
	{
		ft_putstr(argv[j]);
		ft_putchar('\n');
		j++;
	}
	return (0);
}
