/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_magnitude.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 06:17:31 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 06:52:57 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "4ternion.h"

float	ft_quat_magnitude(t_4ternion v)
{
	return (sqrtf(v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w));
}
