/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:40:27 by polenyc           #+#    #+#             */
/*   Updated: 2023/10/11 19:25:38 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE_RUL 4

typedef struct s_1
{
	int			num_of_lines;
	int			line_len;
	char		*rulls;
	char		**map;
}				t_map;

typedef struct s2
{
	int			x;
	int			y;
	int			max;
}				t_coordinat;

// string
void			ft_putchar(char ch);
void			ft_putstr(char *str);
int				ft_isspace(int c);
int				is_number(char ch);
int				ft_atoi(char *str);
unsigned int	read_num_of_line(char *str);
// mamory alloc
char			*create_str(int size);
int				**create_matrix(t_map *map);
void			mamorry_free(t_map *map, int **matrix);
t_map			*create_t_map(int num_lines, int line_len, int len_fo_rul);
t_map			*write_d_t_map_t(t_map *map, char *str);

t_map			*read_file(char *filename);
int				**bsq(t_map *map);
int				write_map(t_map *map, int **matrix);