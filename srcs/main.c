/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbehm <bbehm@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 09:26:59 by bbehm             #+#    #+#             */
/*   Updated: 2020/10/30 10:10:43 by bbehm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int main(void)
{
	t_lem	*lem;
	char	*line;

	line = NULL;
	lem = initialize_lem();

	get_next_line(2, &line);
		lem->ants = ft_atoi(line);
	ft_strdel(&line);
	get_rooms(&line);

	return (0);
}
