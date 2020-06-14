/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 21:30:01 by home              #+#    #+#             */
/*   Updated: 2020/06/13 22:55:26 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "master.h"

void	app_state_initialize(t_app_state *app_state)
{
	app_state->active = true;
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
	}

	SDLU_close(&display);
	return (0);
}
