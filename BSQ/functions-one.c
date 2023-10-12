/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions-one.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:04:36 by polenyc           #+#    #+#             */
/*   Updated: 2023/10/11 19:29:03 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>
#include <stdlib.h>

char	*create_str(int size)
{
	char	*str;

	str = (char *)malloc(size * sizeof(char));
	return (str);
}

int	**init_matrix(t_map *map, int **matrix)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->num_of_lines)
	{
		j = 0;
		while (j < map->line_len)
		{
			if (map->map[i][j] == map->rulls[1])
				matrix[i][j] = -1;
			++j;
		}
		++i;
	}
	return (matrix);
}

int	**create_matrix(t_map *map)
{
	int	i;
	int	**matrix;

	if (map == NULL)
		return (NULL);
	matrix = (int **)malloc(map->num_of_lines * sizeof(int *));
	if (!matrix)
		return (NULL);
	i = 0;
	while (i < map->num_of_lines)
	{
		matrix[i] = (int *)calloc(map->line_len, sizeof(int));
		if (!matrix[i])
			return (NULL);
		++i;
	}
	return (init_matrix(map, matrix));
}

t_map	*create_t_map(int num_lines, int line_len, int len_fo_rul)
{
	t_map	*map;
	int		tmp;

	tmp = num_lines;
	map = (t_map *)malloc(sizeof(t_map));
	if (!map)
		return (NULL);
	map->map = (char **)malloc(num_lines * sizeof(char *));
	if (!map->map)
		return (NULL);
	while (tmp > 0)
	{
		map->map[tmp - 1] = (char *)malloc((line_len + 1) * sizeof(char));
		if (!map->map[num_lines - 1])
			return (NULL);
		--tmp;
	}
	map->rulls = (char *)malloc(len_fo_rul * sizeof(char));
	if (!map->rulls)
		return (NULL);
	map->line_len = line_len;
	map->num_of_lines = num_lines;
	return (map);
}

void	mamorry_free(t_map *map, int **matrix)
{
	int	i;

	i = 0;
	while (i < map->num_of_lines)
	{
		free(map->map[i]);
		free(matrix[i]);
		++i;
	}
	free(map->rulls);
	free(map);
	free(matrix);
}
