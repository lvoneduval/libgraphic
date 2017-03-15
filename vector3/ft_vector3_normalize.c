/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_normalize.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <lduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 21:51:13 by lduval            #+#    #+#             */
/*   Updated: 2017/03/14 22:43:07 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_vector3	*ft_vector3_normalize(t_vector3 *v)
{
	t_vector3	*v1;
	float		len;

	if (!(v1 = (t_vector3 *)malloc(sizeof(t_vector3))))
		return (NULL);
	len = ft_vector3_magnitude(v);
	v1->x = v->x / len;
	v1->y = v->y / len;
	v1->z = v->z / len;
	return (v1);
}
