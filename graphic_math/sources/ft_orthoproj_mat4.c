/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_orthoproj_mat4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopee <upopee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 23:03:27 by upopee            #+#    #+#             */
/*   Updated: 2018/05/13 20:06:55 by upopee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../../libgraphic_macros.h"
#include "../includes/camera.h"

t_matrix4			ft_orthoproj_mat4(float fov, float near,
										float far, float ratio)
{
	t_matrix4	dst;
	float		top;
	float		bottom;
	float		left;
	float		right;

	top = tanf(TO_RADIAN(fov) * 0.5) * near;
	bottom = -top;
	left = bottom * ratio;
	right = top * ratio;
	dst = ft_mat4_null();
	dst.array[0][0] = 2.0 / (right - left);
	dst.array[0][3] = -(right + left) / (right - left);
	dst.array[1][1] = 2.0 / (top - bottom);
	dst.array[1][3] = -(top + bottom) / (top - bottom);
	dst.array[2][2] = -2.0 / (far - near);
	dst.array[2][3] = -(far + near) / (far - near);
	dst.array[3][3] = 1.0;
	return (dst);
}
