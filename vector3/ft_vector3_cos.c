/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_cos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <lduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 22:39:18 by lduval            #+#    #+#             */
/*   Updated: 2017/03/14 22:42:42 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraphic.h"

t_vector3	*ft_vector3_cos(t_vector3 *v1, t_vector3 *v2)
{
	return (ft_vector3_dotprod(v1, v2) /
			(ft_vector3_magnitude(v1) * ft_vector3_magnitude(v2)));
}
