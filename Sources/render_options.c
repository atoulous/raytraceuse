/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_options.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 09:48:00 by mmoullec          #+#    #+#             */
/*   Updated: 2017/01/30 09:48:04 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void	change_light_status(void *arg)
{
	t_env *e;

	e = (t_env *)arg;
	(OPT_L) ? (OPT ^= (1 << 1)) : (OPT |= (1 << 1));
	create_img(e);
}

void	change_brillance_status(void *arg)
{
	t_env *e;

	e = (t_env *)arg;
	(OPT_B) ? (OPT ^= (1 << 3)) : (OPT |= (1 << 3));
	create_img(e);
}

void	change_shadow_status(void *arg)
{
	t_env *e;

	e = (t_env *)arg;
	(OPT_O) ? (OPT ^= (1 << 4)) : (OPT |= (1 << 4));
	create_img(e);
}

void	change_global_quality(void *arg)
{
	t_env *e;

	e = (t_env *)arg;
	if (OPT_GQ)
	{
		OPT ^= (1 << 1);
		OPT ^= (1 << 3);
		OPT ^= (1 << 4);
		OPT ^= (1 << 5);
	}
	else
	{
		OPT |= (1 << 1);
		OPT |= (1 << 3);
		OPT |= (1 << 4);
		OPT |= (1 << 5);
	}
	change_btn_light(e);
	create_img(e);
}
