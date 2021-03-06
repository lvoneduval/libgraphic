/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_scale.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 06:18:35 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 07:18:07 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "4ternion.h"

t_4ternion	ft_quat_scale(t_4ternion v1, float f)
{
	t_4ternion	v;

	v.x = v1.x * f;
	v.y = v1.y * f;
	v.z = v1.z * f;
	v.z = v1.w * f;
	return (v);
}
