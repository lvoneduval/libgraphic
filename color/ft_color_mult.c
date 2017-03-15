/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_mult.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <lduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 21:35:07 by lduval            #+#    #+#             */
/*   Updated: 2017/03/15 10:06:27 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_color		*ft_color_mult(t_color *c1, float rat)
{
	t_color	*c;

	if (!(c = (t_color *)malloc(sizeof(t_color))))
		return (NULL);
	c->red = ft_min(c1->red * rat, 255);
	c->green = ft_min(c1->green * rat, 255);
	c->blue = ft_min(c1->blue * rat, 255);
	return (c);
}
