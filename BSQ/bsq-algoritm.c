/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq-algoritm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:39:30 by polenyc           #+#    #+#             */
/*   Updated: 2023/10/11 19:25:26 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	check_pos_add(t_map *map, int bias, int i, int j)
{
	int	l;

	l = 1;
	while (l <= bias)
	{
		if (map->map[i][j] == map->rulls[1])
			return (0);
		if (map->map[i][j + l] == map->rulls[1])
			return (0);
		if (map->map[i + l][j] == map->rulls[1])
			return (0);
		++l;
	}
	return (1);
}

int	check_pos(t_map *map, int i, int j)
{
	int	l;
	int	bias;
	int	result;

	if (map->map[i][j] == map->rulls[1])
		return (-1);
	bias = 1;
	result = 0;
	--i;
	--j;
	while (i >= 0 && j >= 0)
	{
		if (!check_pos_add(map, bias, i, j))
			return (result);
		++bias;
		++result;
		--i;
		--j;
	}
	return (result);
}

int	find_large_sqr(t_map *map, int **matrix)
{
	int	i;
	int	j;

	i = 1;
	while (i < map->num_of_lines)
	{
		j = 1;
		while (j < map->line_len)
		{
			matrix[i][j] = check_pos(map, i, j);
			++j;
		}
		++i;
	}
	return (1);
}

int	**bsq(t_map *map)
{
	int	**matrix;

	if (map->num_of_lines == 0)
		return (NULL);
	matrix = create_matrix(map);
	if (!matrix)
		return (NULL);
	if (!find_large_sqr(map, matrix))
		return (NULL);
	return (matrix);
}
