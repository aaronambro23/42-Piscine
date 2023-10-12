/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:38:12 by polenyc           #+#    #+#             */
/*   Updated: 2023/10/11 19:31:03 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <unistd.h>

int	find_max(t_map *map, int **matrix)
{
	int	max;
	int	i;
	int	j;

	max = matrix[0][0];
	i = 1;
	while (i < map->num_of_lines)
	{
		j = 1;
		while (j < map->line_len)
		{
			if (matrix[i][j] > max)
				max = matrix[i][j];
			++j;
		}
		++i;
	}
	return (max);
}

t_coordinat	find_coord(t_map *map, int **matrix, int max)
{
	int			i;
	int			j;
	t_coordinat	coord;

	i = 1;
	coord.x = 0;
	coord.y = 0;
	coord.max = max;
	while (i < map->num_of_lines)
	{
		j = 1;
		while (j < map->line_len)
		{
			if (matrix[i][j] == max)
			{
				coord.x = i;
				coord.y = j;
				return (coord);
			}
			++j;
		}
		++i;
	}
	return (coord);
}

t_map	*filling_map(t_map *map, int **matrix)
{
	t_coordinat	coord;
	int			max;
	int			i;
	int			j;

	max = find_max(map, matrix);
	coord = find_coord(map, matrix, max);
	i = coord.x - coord.max;
	if (coord.max == 0 && map->line_len > 1 && map->num_of_lines > 1)
		return (NULL);
	while (i <= coord.x)
	{
		j = coord.y - coord.max;
		while (j <= coord.y)
		{
			map->map[i][j] = map->rulls[SIZE_RUL - 2];
			++j;
		}
		++i;
	}
	return (map);
}

int	write_map(t_map *map, int **matrix)
{
	int	i;

	filling_map(map, matrix);
	i = 0;
	while (i < map->num_of_lines)
	{
		ft_putstr(map->map[i]);
		ft_putchar('\n');
		++i;
	}
	return (1);
}
