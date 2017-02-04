/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reflection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgameiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 12:03:41 by dgameiro          #+#    #+#             */
/*   Updated: 2017/02/04 19:19:46 by jubarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void	init_reflect(t_param *param)
{
	F_COLOR.r = 0;
	F_COLOR.g = 0;
	F_COLOR.b = 0;
	REF_COEFF = 1;
}

void	add_reflected_color(t_param *param)
{
	F_COLOR.r += (COLOR & 0xFF) * REF_COEFF;
	F_COLOR.g += ((COLOR & 0xFF00) >> 8) * REF_COEFF; 
	F_COLOR.b += ((COLOR & 0xFF0000) >> 16) * REF_COEFF;
}