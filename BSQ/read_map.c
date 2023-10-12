/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:15:58 by polenyc           #+#    #+#             */
/*   Updated: 2023/10/11 19:30:41 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

t_map	*write_d_t_map(t_map *map, char *str)
{
	char	*s;
	int		i;

	s = str;
	while (*s != '\n')
		++s;
	s = s - (SIZE_RUL - 1);
	i = 0;
	while (*s != '\n')
		map->rulls[i++] = *s++;
	++s;
	return (write_d_t_map_t(map, s));
}

t_map	*create_map(char *str, unsigned int num_line)
{
	t_map	*map;
	int		size_line;
	char	*s;

	s = str + 1;
	size_line = 0;
	while (*(s - 1) != '\n')
		++s;
	while (*s != '\n' && *s != '\0')
	{
		++size_line;
		++s;
	}
	map = create_t_map(num_line, size_line, SIZE_RUL);
	if (!map)
		return (NULL);
	return (write_d_t_map(map, str));
}

t_map	*control_data(char *str)
{
	unsigned int	num_lines;
	char			*s;

	s = str;
	while (*s != '\n')
		++s;
	s = s - (SIZE_RUL - 1);
	if (*s == *(s + 1) || *s == *(s + 2) || *(s + 2) == *(s + 1))
		return (NULL);
	num_lines = read_num_of_line(str);
	if (num_lines == 0)
		return (NULL);
	return (create_map(str, num_lines));
}

t_map	*copy_data_to_str(char *filename, char *str, int size)
{
	int		file;
	t_map	*map;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (NULL);
	read(file, str, size - 1);
	close(file);
	str[size - 1] = '\0';
	return (control_data(str));
}

t_map	*read_file(char *filename)
{
	int		file;
	int		size;
	char	tmp;
	char	*str;
	t_map	*map;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (NULL);
	if (!read(file, &tmp, 1))
		return (NULL);
	if (!is_number(tmp))
		return (NULL);
	size = 1;
	while (read(file, &tmp, 1))
		++size;
	str = create_str(size);
	if (!str)
		return (NULL);
	close(file);
	map = copy_data_to_str(filename, str, size);
	free(str);
	return (map);
}

// printf("\n-----------START----------\n");
// printf("%s", str);
// printf("\n-----------END----------\n");