/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_shadow_status.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 14:28:36 by mmoullec          #+#    #+#             */
/*   Updated: 2017/01/11 16:28:46 by atoulous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void		change_shadow_status(void *arg)
{
	t_env *e;

	e = (t_env *)arg;
	(OPT & (1 << 4)) ? (OPT ^= (1 << 4)) : (OPT |= (1 << 4));
	create_img(e);
}

void		change_brillance_status(void *arg)
{
	t_env *e;

	e = (t_env *)arg;
	(OPT & (1 << 3)) ? (OPT ^= (1 << 3)) : (OPT |= (1 << 3));
	create_img(e);
}
