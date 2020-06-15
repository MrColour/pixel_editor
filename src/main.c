/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 21:30:01 by home              #+#    #+#             */
/*   Updated: 2020/06/14 22:34:16 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "master.h"

void	app_state_initialize(t_app_state *app_state)
{
	app_state->active = true;

	app_state->size = 8;
	app_state->grid_color = 0xAAAAAA;

	app_state->pixmap = malloc(sizeof(app_state->pixmap) * (app_state->size * app_state->size));
	bzero(app_state->pixmap, sizeof(app_state->pixmap) * (app_state->size * app_state->size));
	app_state->pixel_color = 0xFFFFFF;
}

int	main(void)
{
	t_display	display;
	t_app_state	app_state;

	printf("Testing\n");
	SDLU_start(&display);
	app_state_initialize(&app_state);
	while (app_state.active == true)
	{
		process_user_input(&app_state);
		// update_app_input(&app_state);

		draw_mouse_tile(&app_state, &display);
		draw_image(&app_state, &display);

		draw_grid(&app_state, &display);

		SDL_UpdateWindowSurface(display.window);
		clear_screen(display.pixels);

		printf("MOUSE (%d, %d)\n", app_state.mouse_x, app_state.mouse_y);
	}

	SDLU_close(&display);
	return (0);
}
