/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:35:06 by antandre          #+#    #+#             */
/*   Updated: 2024/09/25 13:26:18 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game	*game;

	//check_args(argc, argv, &game);
	game.fd = open(argv[1], O_RDONLY);
	if (game.fd < 0 || game.fd == 0)
			ft_error("Failed to open file");
	
	//Functions to initialize values, maps, layers, mlx, textures
	init_value(&game);
	parse_map(&game);
	validate_map(&game);
	
	/*
	mlx_loop_hook();
	mlx_key_hook();
	mlx_loop(game.mlx);
	*/
	//Function to clean up everything
}
