/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:18:05 by aaambros          #+#    #+#             */
/*   Updated: 2023/10/02 11:12:22 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 1;
	while (i < size)
	{
		j = i;
		while (j > 0 && tab[j - 1] > tab[j])
		{
			temp = tab[j];
			tab[j] = tab[j - 1];
			tab[j - 1] = temp;
			j--;
		}
		i++;
	}
}

// #include <stdio.h>

// void	ft_sort_int_tab(int *tab, int size);

// int	main(void)
// {
// 	int	tab[] = {6, 2, 8, 4, 1, 9};
// 	int	size;

// 	size = 6;
// 	printf("Original Array:\n");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", tab[i]);
// 	}
// 	ft_sort_int_tab(tab, size);
// 	printf("\nSorted Array (Ascending Order):\n");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", tab[i]);
// 	}
// 	return (0);
// }
