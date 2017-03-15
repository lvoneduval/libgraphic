/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_sub.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <lduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 21:34:09 by lduval            #+#    #+#             */
/*   Updated: 2017/03/15 10:06:47 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_color		*ft_color_sub(t_color *c1, t_color *c2)
{
	t_color	*c;

	if (!(c = (t_color *)malloc(sizeof(t_color))))
		return (NULL);
	c->red = ft_max(c1->red - c2->red, 0);
	c->green = ft_max(c1->green - c2->green, 0);
	c->blue = ft_max(c1->blue - c2->blue, 0);
	return (c);
}
