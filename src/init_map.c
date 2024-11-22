/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle-fur <dle-fur@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:58:55 by dle-fur           #+#    #+#             */
/*   Updated: 2024/11/24 15:36:04 by dle-fur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	initiation_map(t_game *game)
{
	if (!read_map(game))
		return (ft_error(7));
	if (!count_element_map(game))
		return (0);
	if (!valid_map(game))
		return (0);
	return (1);
}
