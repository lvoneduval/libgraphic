/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_opposite.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <lduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 22:04:08 by lduval            #+#    #+#             */
/*   Updated: 2017/03/14 22:06:43 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_vector3	*ft_vector3_opposite(t_vector3 *v)
{
	t_vector3	*v1;

	if (!(v1 = (t_vector3 *)malloc(sizeof(t_vector3))))
		return (NULL);
	v1->x = -v->x;
	v1->y = -v->y;
	v1->z = -v->z;
	return (v1);
}
