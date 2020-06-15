/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 22:16:06 by home              #+#    #+#             */
/*   Updated: 2020/06/14 22:27:50 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "master.h"

int		convert_to_pixmap(int x, int y, int size)
{
	int	s_x;
	int	s_y;
	int	result;
	int	tile_size;

	result = 0;
	tile_size = WIN_WIDTH / size;
	s_x = (x / tile_size);
	s_y = (y / tile_size);
	result = s_y * size + s_x;
	return (result);
}
