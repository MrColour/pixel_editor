/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   master.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 21:44:13 by home              #+#    #+#             */
/*   Updated: 2020/06/15 01:50:25 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MASTER_H
# define MASTER_H

#include <SDL2/SDL.h>

#include "SDL_extended_keyset.h"

#include "window_config.h"
#include "structs.h"

void	SDLU_start(t_display *dest);
void	SDLU_close(t_display *display);

void	process_user_input(t_app_state *app_state);

void	draw_grid(t_app_state *app_state, t_display *display);
void	draw_mouse_tile(t_app_state *app_state, t_display *display);
void	draw_tile(t_display *display, int x, int y, int color, int size);

void	draw_image(t_app_state *app_state, t_display *display);
void	clear_image(int *pixmap, int size);


void	clear_screen(unsigned char *pixel_array);
void	color_in(unsigned char *pixel_array, int color, int x, int y);

int		convert_to_pixmap(int x, int y, int size);

#endif
