t_matrix4	ft_transpose_mat4(t_matrix4 m)
{
	t_matrix4	dst;
	int			i;
	int			j;

	i = 4;
	while (i--)
	{
		j = 4;
		while (j--)
			dst.array[i][j] = m.array[j][i];
	}
	return (dst);
}
