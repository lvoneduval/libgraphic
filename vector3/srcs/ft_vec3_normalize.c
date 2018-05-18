/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 05:40:52 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 07:00:07 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector3.h"

t_vector3	ft_vec3_normalize(t_vector3 v)
{
	t_vector3	v1;
	float		len;

	v1.x = v.x;
	v1.y = v.y;
	v1.z = v.z;
	if (len = ft_vec3_magnitude(v))
	{
		len = 1.0 / len;
		v1.x *= len;
		v1.y *= len;
		v1.z *= len;
	}
	return (v1);
}
