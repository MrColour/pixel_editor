/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixels.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 22:39:01 by home              #+#    #+#             */
/*   Updated: 2020/06/13 23:45:47 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "master.h"

void	color_in(unsigned char *pixel_array, int color, int x, int y)
{
	int	i;
	int	j;

	i = 0;
	x *= UPSCALE;
	y *= UPSCALE;

	if (x < 0 || x > WIN_WIDTH || y < 0 || y > WIN_HEIGHT)
		return ;

	while (i < UPSCALE)
	{
		j = 0;
		while (j < UPSCALE)
		{
			pixel_array[(y + j) * WIN_WIDTH * BPP + (x + i) * BPP + 0] = color >> 0;
			pixel_array[(y + j) * WIN_WIDTH * BPP + (x + i) * BPP + 1] = color >> 8;
			pixel_array[(y + j) * WIN_WIDTH * BPP + (x + i) * BPP + 2] = color >> 16;
			j++;
		}
		i++;
	}
}

void	clear_screen(unsigned char *pixel_array)
{
	bzero(pixel_array, WIN_WIDTH * WIN_HEIGHT * BPP);
}
