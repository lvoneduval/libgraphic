/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix3_newrot.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <lduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 23:18:43 by lduval            #+#    #+#             */
/*   Updated: 2017/03/15 10:04:25 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void		rot(t_matrix3 *m, t_vector3 *v, float angle)
{
	float c;
	float s;

	c = cos(angle);
	s = sinus(angle);
	m->m[0][0] = (pow(v->x, 2) * (1 - c)) + c;
	m->m[0][1] = ((v->x * v->y) * (1 - c)) - (v->z * s);
	m->m[0][2] = ((v->x * v->z) * (1 - c)) + (v->y * s);
	m->m[1][0] = ((v->x * v->y) * (1 - c)) + (v->z * s);
	m->m[1][1] = (pow(v->y, 2) * (1 - c)) + c;
	m->m[1][2] = ((v->y * v->z) * (1 - c)) - (v->x * s);
	m->m[2][0] = ((v->x * v->z) * (1 - c)) - (v->y * s);
	m->m[2][1] = ((v->y * v->z) * (1 - c)) + (v->x * s);
	m->m[2][2] = (pow(v->z, 2) * (1 - c)) + c;
}

t_matrix3		*ft_matrix3_newrot(char c, float angle)
{
	t_matrix3 *m;
	t_vector3 *v;

	if (!(m = ft_matrix3_new()) ||
			!(v = ft_vector3_new()))
		return (NULL);
	if (c == 'x')
		v->x = 1;
	else if (c == 'y')
		v->y = 1;
	else if (c == 'z')
		v->z = 1;
	rot(m, v, angle);
	free(v);
	return (m);
}
