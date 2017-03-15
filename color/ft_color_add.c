/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <lduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 21:32:38 by lduval            #+#    #+#             */
/*   Updated: 2017/03/15 10:06:07 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_color		*ft_color_add(t_color *c1, t_color *c2)
{
	t_color	*c;

	if (!(c = (t_color *)malloc(sizeof(t_color))))
		return (NULL);
	c->red = ft_min(c1->red + c2->red, 255);
	c->green = ft_min(c1->green + c2->green, 255);
	c->blue = ft_min(c1->blue + c2->blue, 255);
	return (c);
}
