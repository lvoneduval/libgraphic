t_quat	ft_mat4_premul_norm_quat(t_matrix4 m, t_quat q)
{
	t_quat	dst;
	float		w_inv;

	dst.x = m.array[0][0] * q.x + m.array[1][0] * q.y
			+ m.array[2][0] * q.z + m.array[3][0] * q.w;
	dst.y = m.array[0][1] * q.x + m.array[1][1] * q.y
			+ m.array[2][1] * q.z + m.array[3][1] * q.w;
	dst.z = m.array[0][2] * q.x + m.array[1][2] * q.y
			+ m.array[2][2] * q.z + m.array[3][2] * q.w;
	dst.w = m.array[0][3] * q.x + m.array[1][3] * q.y
			+ m.array[2][3] * q.z + m.array[3][3] * q.w;
	if (dst.w != 1.0 && dst.w != 0.0)
	{
		w_inv = 1.0 / dst.w;
		dst.x *= w_inv;
		dst.y *= w_inv;
		dst.z *= w_inv;
		dst.w *= w_inv;
	}
	return (dst);
}
