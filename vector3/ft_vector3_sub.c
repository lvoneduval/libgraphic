/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_sub.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <lduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 22:00:07 by lduval            #+#    #+#             */
/*   Updated: 2017/03/14 22:02:23 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_vector3	*ft_vector3_sub(t_vector3 *v1, t_vector3 *v2)
{
	t_vector3	*v;

	if (!(v = (t_vector3 *)malloc(sizeof(t_vector3))))
		return (NULL);
	v->x = v1->x - v2->x;
	v->y = v1->y - v2->y;
	v->z = v1->z - v2->z;
	return (v);
}
