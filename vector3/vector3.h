/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 04:32:14 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 07:34:58 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR3_H
# define VECTOR3_H

#include "math.h"

/*
** /////////////////////////////////////////////////////////////////////////////
** Structure  Vector 3:
**
**
** /////////////////////////////////////////////////////////////////////////////
*/

typedef	struct	s_vector3
{
	float		x;
	float		y;
	float		z;
}				t_vector3;

t_vector3		ft_vec3_new(float x, float y, float z);
t_vector3		ft_vec3_add(t_vector3 v1, t_vector3 v1);
t_vector3		ft_vec3_sub(t_vector3 v1, t_vector3 v2);
t_vector3		ft_vec3_opp	(t_vector3 v);
t_vector3		ft_vec3_normalize(t_vector3 v);
t_vector3		ft_vec3_scale(t_vector3 v, float f);
t_vector3		ft_vec3_prodcross(t_vector3 v1, t_vector2 v2);
t_vector3		ft_vec3_cos(t_vector3 v1, t_vector2 v2);
float			ft_vec3_maginitude(t_vector3 v);
float			ft_vec3_dotprod(t_vector3 v1, t_vector2 v2);
int				ft_vec3_iseq(t_vector3 v1, t_vector2 v2);

#endif
