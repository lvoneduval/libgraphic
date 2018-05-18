/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 06:18:03 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 07:12:58 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "4ternion.h"

t_4ternion	ft_quat_normalize(t_4ternion v)
{
	t_4ternion	v1;
	float		len;

	v1.x = v.x;
	v1.y = v.y;
	v1.z = v.z;
	v1.w = v.w;
	if ((len = ft_quat_magnitude(v)))
	{
		len = 1 / len;	
		v1.x *= len;
		v1.y *= len;
		v1.z *= len;
		v1.w *= len;	
	}	
	return (v1);
}
