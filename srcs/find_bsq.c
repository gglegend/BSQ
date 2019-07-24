/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_bsq.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:02:23 by unicolle          #+#    #+#             */
/*   Updated: 2019/07/24 17:02:27 by unicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	find_bsq(t_a *a)
{
	a->bsq_pos_x = 0;
	a->bsq_pos_y = 0;
	a->bsq_side_size = 3;
	a->bsq_square_size = a->bsq_side_size * a->bsq_side_size;
}
