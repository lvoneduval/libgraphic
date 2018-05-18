/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector2.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 04:32:14 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 07:35:18 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR2_H
# define VECTOR2_H

#include "math.h"

/*
** /////////////////////////////////////////////////////////////////////////////
** Structure  Vector 2:
**
**
** /////////////////////////////////////////////////////////////////////////////
*/

typedef	struct	s_vector2
{
	float		x;
	float		y;
}				t_vector2;

t_vector2		ft_vec2_new(float x, float y);
float			ft_vec2_maginitude(t_vector2 v);
t_vector2		ft_vec2_normalize(t_vector2 v);
t_vector2		ft_vec2_add(t_vector2 v1, t_vector2 v1);
t_vector2		ft_vec2_sub(t_vector2 v1, t_vector2 v2);
t_vector2		ft_vec2_opp	(t_vector2 v);
t_vector2		ft_vec2_scale(t_vector2 v, float f);
float			ft_vec2_dotprod(t_vector2 v1, t_vector2 v2);
t_vector2		ft_vec2_prodcross(t_vector2 v1, t_vector2 v2);
t_vector2		ft_vec2_cos(t_vector2 v1, t_vector2 v2);
int				ft_vec2_iseq(t_vector2 v1, t_vector2 v2);

#endif
