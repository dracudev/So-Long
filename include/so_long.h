/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:32:25 by antandre          #+#    #+#             */
/*   Updated: 2024/09/25 13:26:33 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

/* HEADERS AND LIBRARIES */

# include <stdlib.h>
# include <stdio.h>
# include <math.h>
# include <unistd.h>
# include <fcntl.h>

# include "../lib/MLX42/include/MLX42/MLX42.h"
# include "../lib/Libft/include/libft.h"

/* STRUCTS */

typedef struct s_multi
{
	mlx_image_t	*image;
	int			x;
	int			y;
}				t_multi;

typedef struct s_img
{
	mlx_image_t	*floor[2];
	mlx_image_t	*wall;
	t_multi		exit;
	t_multi		player;
	t_multi		collect[100];
}				t_img;

typedef struct s_map
{
	char	**calloc;
	char	**info;
	int		columns;
	int		rows;
	int		collectible;
	int		player;
	int		exit;
	int		walls;
	int		floor;
}				t_map;

typedef struct s_position
{
	int					x;
	int					y;
	unsigned int		move;
}				t_position;

typedef struct s_game
{
	mlx_t		*mlx;
	int			fd;
	t_img		img;
	t_map		map;
	t_position	position;
	int			count;
	int			finish_game;
}				t_game;

/* FUNCTIONS */

void	ft_error(char *msg);
void	parse_map(t_game *game);
int	validate_map(t_game *game);
void	init_value(t_game *game);

#endif
