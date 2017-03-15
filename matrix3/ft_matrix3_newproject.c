/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix3_newproject.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <lduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 00:38:26 by lduval            #+#    #+#             */
/*   Updated: 2017/03/15 10:02:11 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_matrix3	*ft_matrix3_newproject(float fov, float ratio,
		float near, float far)
{
	t_matrix3	*m;
	float		range;
	float		tanhalffov;

	range = near - far;
	tanhalfov = tan(deg2rad(fov * 0.5));
	if (!(m = ft_matrix3_new()))
		return (NULL);
	m->m[0][0] = (1 / (tanhalfov * ratio));
	m->m[1][1] = (1 / tanhalfov);
	m->m[2][2] = -((-near) - far) / range;
	m->m[2][3] = (2 * far * near) / range;
	m->m[3][2] = -1.0;
	m->m[3][3] = 0;
	return (m);
}
