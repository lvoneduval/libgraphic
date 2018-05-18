/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quat_cos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 06:16:53 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 06:25:30 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "4ternion.h"

t_4ternion	ft_quat_cos(t_4ternion v1, t_4ternion v2)
{
	return (ft_quat_dotprod(v1, v2) /
			(ft_quat_magnitude(v1) * ft_quat_magnitude(v2)));
}
