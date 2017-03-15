/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix3_multm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <lduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 02:07:24 by lduval            #+#    #+#             */
/*   Updated: 2017/03/15 10:00:25 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_matrix3		*ft_matrix3_multm(t_matrix3 *m1, t_matrix *m2)
{
	t_matrix	*m;
	int			i;
	int			j;
	int			k;

	if (!(m = ft_matrix3_new()))
		return (NULL);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			k = -1;
			while (++k < 4)
				m->m[i][j] += m1->m[i][k] * m2->m[k][j];
			j++;
		}
		i++;
	}
	return (m);
}
