/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_prodxscal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <lduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 22:08:29 by lduval            #+#    #+#             */
/*   Updated: 2017/03/14 22:43:33 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_vector3	*ft_vector3_prodxscal(t_vector3 *v1, float f)
{
	t_vector3	*v;

	if (!(v = (t_vector3 *)malloc(sizeof(t_vector3))))
		return (NULL);
	v->x = v1->x * f;
	v->y = v1->y * f;
	v->z = v1->z * f;
	return (v);
}
