/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4ternion.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 06:28:17 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 06:28:32 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 4TERNION_H
# define 4TERNION_H

#include "math.h"

typedef	struct	s_4ternion
{
	float		x;
	float		y;
	float		z;
}				t_4ternion;

t_4ternion		ft_quat_new(float x, float y, float z);
float			ft_quat_maginitude(t_4ternion v);
t_4ternion		ft_quat_normalize(t_4ternion v);
t_4ternion		ft_quat_add(t_4ternion v1, t_4ternion v1);
t_4ternion		ft_quat_sub(t_4ternion v1, t_4ternion v2);
t_4ternion		ft_quat_opp	(t_4ternion v);
t_4ternion		ft_quat_scale(t_4ternion v, float f);
float			ft_quat_dotprod(t_4ternion v1, t_vector2 v2);
t_4ternion		ft_quat_prodcross(t_4ternion v1, t_vector2 v2);
t_4ternion		ft_quat_cos(t_4ternion v1, t_vector2 v2);
int				ft_quat_iseq(t_4ternion v1, t_vector2 v2);

#endif
