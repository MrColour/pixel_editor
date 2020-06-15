/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 21:45:37 by home              #+#    #+#             */
/*   Updated: 2020/06/15 01:49:39 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "master.h"

void	draw_image(t_app_state *app_state, t_display *display)
{
	int	i;
	int	size;

	i = 0;
	size = (app_state->size) * (app_state->size);
	while (i < size)
	{
		if (app_state->pixmap[i] != 0)
		{
			printf("AT %d\n", i);
			draw_tile(display,
				i % app_state->size, i / app_state->size,
				app_state->pixmap[i], app_state->size);
		}
		i++;
	}
}

void	clear_image(int *pixmap, int size)
{
	bzero(pixmap, sizeof(*pixmap) * (size * size));
}
