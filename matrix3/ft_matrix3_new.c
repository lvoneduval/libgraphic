/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix3_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <lduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 22:47:52 by lduval            #+#    #+#             */
/*   Updated: 2017/03/15 10:01:12 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	initmat(float *(m[4][4]))
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			(*m)[i][j] = 0;
			j++;
		}
		i++;
	}
	(*m)[3][3] = 1;
}

t_matrix3	*ft_matrix3_new(void)
{
	t_matrix3	*m;

	if (!(m = (t_matrix3 *)malloc(sizeof(t_matrix3))))
		return (NULL);
	initmat(&(m->n));
	return (m);
}
