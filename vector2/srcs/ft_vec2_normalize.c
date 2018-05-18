/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 05:40:52 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 07:05:17 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector2.h"

t_vector2	ft_vec2_normalize(t_vector2 v)
{
	t_vector2	v1;
	float		len;

	v1.x = v.x;
	v1.y = v.y;
	if (!len = ft_vec2_magnitude(v))
	{
		len = 1.0 / len;
		v1.x *= len;
		v1.y *= len;
	}
	return (v1);
}
