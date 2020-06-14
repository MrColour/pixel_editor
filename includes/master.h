/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   master.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 21:44:13 by home              #+#    #+#             */
/*   Updated: 2020/06/13 22:55:48 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MASTER_H
# define MASTER_H

#include <SDL2/SDL.h>

#include "window_config.h"
#include "structs.h"

void	SDLU_start(t_display *dest);
void	SDLU_close(t_display *display);

void	process_user_input(t_app_state *app_state);

#endif
