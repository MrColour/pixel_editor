/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 23:47:11 by home              #+#    #+#             */
/*   Updated: 2020/06/14 19:29:57 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "master.h"

void	draw_grid(t_app_state *app_state, t_display *display)
{
	int	x;
	int	y;

	x = 0;
	while (x < WIN_WIDTH / UPSCALE)
	{
		y = 0;
		while (y < app_state->size)
		{
			color_in(display->pixels, app_state->grid_color, x, y * (WIN_HEIGHT / app_state->size));
			color_in(display->pixels, app_state->grid_color, y * (WIN_HEIGHT / app_state->size), x);
			y++;
		}
		x++;
	}
}

void	draw_tile(t_app_state *app_state, t_display *display)
{
	int	i;
	int	s_x;
	int	s_y;
	int	tile_size;

	i = 0;
	tile_size = WIN_WIDTH / app_state->size;
	s_x = (app_state->mouse_x / tile_size) * tile_size;
	s_y = (app_state->mouse_y / tile_size) * tile_size;

	printf("Tile: (%d, %d)\n", s_x, s_y);

	while (i < tile_size)
	{
		memset_pattern4(&(display->pixels[(s_y) * WIN_WIDTH * BPP + s_x * BPP]),
						&(app_state->pixel_color), tile_size * BPP);
		s_y++;
		i++;
	}
}
