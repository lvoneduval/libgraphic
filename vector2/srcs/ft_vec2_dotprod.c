/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2_dotprod.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 05:54:46 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 06:19:43 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector2.h"

float	ft_vec2_dotprod(t_vector2 v1, t_vector2 v2)
{
	return ((v1.x * v2.x) + (v1.y + v2.y));
}
