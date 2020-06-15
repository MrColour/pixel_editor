/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_interface.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 22:56:31 by home              #+#    #+#             */
/*   Updated: 2020/06/14 22:23:27 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "master.h"

void	process_user_input(t_app_state *app_state)
{
	SDL_Event		e;
	const Uint8		*keystate;

	while (SDL_PollEvent(&e) != 0)
	{
		if (e.type == SDL_QUIT)
			app_state->active = false;
		else if (e.type == SDL_MOUSEMOTION)
			SDL_GetMouseState(&(app_state->mouse_x), &(app_state->mouse_y));
		else if (e.type == SDL_MOUSEBUTTONDOWN)
		{
			printf("Mouse Clicked at (%d, %d)\n", app_state->mouse_x, app_state->mouse_y);
			app_state->pixmap[convert_to_pixmap(app_state->mouse_x, app_state->mouse_y, app_state->size)] = 0xAA00CC;
		}
	}
	keystate = SDL_GetKeyboardState(NULL);

}
