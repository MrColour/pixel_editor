/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_interface.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 22:56:31 by home              #+#    #+#             */
/*   Updated: 2020/06/15 02:16:35 by home             ###   ########.fr       */
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
			if (e.button.button == SDL_BUTTON_LEFT)
				app_state->l_mouse_down = true;
			if (e.button.button == SDL_BUTTON_RIGHT)
				app_state->r_mouse_down = true;
		}
		else if (e.type == SDL_MOUSEBUTTONUP)
		{
			if (e.button.button == SDL_BUTTON_LEFT)
				app_state->l_mouse_down = false;
			if (e.button.button == SDL_BUTTON_RIGHT)
				app_state->r_mouse_down = false;
		}
	}
	keystate = SDL_GetKeyboardState(NULL);

	if (app_state->l_mouse_down == true)
		app_state->pixmap[convert_to_pixmap(app_state->mouse_x, app_state->mouse_y, app_state->size)] = 0xAA00CC;
	if (app_state->r_mouse_down == true)
		app_state->pixmap[convert_to_pixmap(app_state->mouse_x, app_state->mouse_y, app_state->size)] = 0x000000;

	if (keystate[SDL_SCANCODE_COMMAND] && keystate[SDL_SCANCODE_BACKSPACE])
		clear_image(app_state->pixmap, app_state->size);
}
