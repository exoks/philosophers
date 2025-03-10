/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:13:34 by oezzaou           #+#    #+#             */
/*   Updated: 2023/05/21 14:25:04 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

//====<[ main: ]>===============================================================
int	main(int ac, char **av)
{
	t_init			init;

	if (!dining_philosofers_init(&init, ac, av))
		return (display_usage_menu(), EXIT_FAILURE);
	start_simulation(&init);
	clear_table(&init);
	return (EXIT_SUCCESS);
}
