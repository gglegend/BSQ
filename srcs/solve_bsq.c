/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_bsq.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unicolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:05:43 by unicolle          #+#    #+#             */
/*   Updated: 2019/07/23 17:05:46 by unicolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	solve_bsq(int fd)
{
	t_a a;

	a.file = read_file(fd);
	validate_file(&a);
}
