/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 21:30:01 by home              #+#    #+#             */
/*   Updated: 2020/06/13 22:45:51 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "master.h"

int	main(void)
{
	t_display	display;
	t_app_state	app_state;

	printf("Testing\n");
	SDLU_start(&display);

	while (app_state.active == true)
	{

	}

	SDLU_close(&display);
	return (0);
}
