/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:14:13 by polenyc           #+#    #+#             */
/*   Updated: 2023/10/11 19:29:36 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

int	main(void)
{
	t_map	*map;
	int		**matrix;

	map = read_file("map0.0.txt");
	matrix = bsq(map);
	for (int i = 0; i < map->num_of_lines; ++i)
		printf("%s\n", map->map[i]);
	printf("map->rulls: %s\n", map->rulls);
	write_map(map, matrix);
	return (0);
}

// for (int i = 0; i < map->num_of_lines; ++i)
// {
//     if (i == 0)
//     {
//         printf("\t");
//         for (int j = 0; j < map->line_len; ++j)
//             printf("%d\t", j);
//         printf("\n");
//     }
//     for (int j = 0; j < map->line_len; ++j)
//         printf("--------");
//     printf("\n");
//     printf("[%d]:\t", i);
//     for (int j = 0; j < map->line_len; ++j)
//         printf("%d\t", matrix[i][j]);
//     printf("\n");
// }