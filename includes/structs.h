/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 22:05:38 by home              #+#    #+#             */
/*   Updated: 2020/06/14 19:10:54 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

#include <SDL2/SDL.h>
#include <stdbool.h>

typedef struct	s_display
{
	int				width;
	int				height;
	int				size;

	SDL_Window		*window;
	unsigned char	*pixels;
}				t_display;

typedef struct	s_app_state
{
	bool		active;

	int			size;
	int			grid_color;

	int			*pixmap;

	int			mouse_x;
	int			mouse_y;

	int			pixel_color;
}				t_app_state;

#endif
