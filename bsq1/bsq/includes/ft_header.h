/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 15:18:19 by raho              #+#    #+#             */
/*   Updated: 2021/06/16 20:02:47 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <fcntl.h>

/*
**GLOBALS
*/

int		g_result;
int		g_x;
int		g_y;
int		g_h;
int		g_j;
int		g_index;

/*
**errors.c
*/

int		ft_invalid_map(char *array);
void	ft_error_putchar(char c);
void	ft_error_putstr(char *str);

/*
**ft_map_modofier.c
*/

void	ft_remove(char *array);
void	ft_width_height(char *array);
void	ft_check_height(char *array, int width, int height);
void	ft_make2d(char *str, int width, int height);
void	ft_copy2d(char **array1, int width, int height);

/*
**ft_map_modofier2.c
*/

void	ft_change_map(char **map2, int width, int height);
void	ft_chartox(char **map2, int width, int height);
void	ft_final_map(char **map2, int width, int height);
void	ft_print_map(char **map2, int width, int height);

/*
**ft_map_reader.c
*/

void	ft_convert_chars(char **array1, char **array2, int width, int height);
void	ft_check_map(char **map1, char **map2, int width, int height);
void	ft_free_map1(char **map1, int height);
int		ft_minimum(char **map2);

/*
**ft_read_files.c
*/

void	ft_read_files(char *map);
int		ft_open_error(void);
int		ft_read_error(void);
int		ft_close_error(void);

/*
**helpers.c
*/

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strcpy(char *dest, char *src);
void	ft_height1_print(char *array);

#endif
