/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_crossprod.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <lduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 22:33:38 by lduval            #+#    #+#             */
/*   Updated: 2017/03/14 22:38:44 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_vector3	*ft_vector3_crossprod(t_vector3 *v1, t_vector3 *v2)
{
	t_vector3	*v;

	if (!(v = (t_vector3 *)malloc(sizeof(t_vector3))))
		return (NULL);
	v->x = (v1->y * v2->z) - (v1->z * v2->y);
	v->y = (v1->z * v2->x) - (v1->x * v2->z);
	v->z = (v1->x * v2->y) - (v1->y * v2->x);
	return (v);
}
