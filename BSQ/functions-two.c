/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions-two.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:41:56 by polenyc           #+#    #+#             */
/*   Updated: 2023/10/11 19:30:09 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdlib.h>

unsigned int	read_num_of_line(char *str)
{
	unsigned int	num;
	char			*s;

	num = 0;
	s = str;
	while (*(s + (SIZE_RUL - 1)) != '\n')
	{
		if (!is_number(*s))
			return (0);
		num *= 10;
		num += *s - '0';
		++s;
	}
	return (num);
}

t_map	*write_d_t_map_t(t_map *map, char *str)
{
	int		i;
	int		l;
	char	*s;

	s = str;
	l = 0;
	while (*s != '\0')
	{
		i = 0;
		while (i < map->line_len)
		{
			if (*s != map->rulls[0] && *s != map->rulls[1])
				return (NULL);
			map->map[l][i++] = *s++;
		}
		if (i == map->line_len && *s != '\n' && *s != '\0')
			return (NULL);
		map->map[l][i] = '\0';
		if (*s == '\0' && l == map->num_of_lines - 1)
			return (map);
		++l;
		++s;
	}
	return (map);
}
