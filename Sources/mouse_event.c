/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_event.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 15:46:55 by jubarbie          #+#    #+#             */
/*   Updated: 2016/12/20 15:19:30 by jubarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void	change_light_status(void *arg)
{
	t_env *e;

	e = (t_env *)arg;
	(L) ? (OPT ^= (1 << 1)) : (OPT |= (1 << 1));
	create_img(e);
}

int		ft_mouse_click(int button, int x, int y, t_env *e)
{
	int i;

	if (button == 1 && x >= 0 && x < 34)
	{
		i = (y - 4) / BTN_SIZE;
		MENU[i].btn_fct(e);
	}
	return (0);
}
