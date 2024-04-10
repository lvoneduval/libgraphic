t_vector3	ft_mat4_premul_vector3(t_matrix4 m, t_vector3 v)
{
	t_vector3	dst;

	dst.x = m.array[0][0] * v.x + m.array[0][1] * v.y
			+ m.array[0][2] * v.z + m.array[0][3];
	dst.y = m.array[1][0] * v.x + m.array[1][1] * v.y
			+ m.array[1][2] * v.z + m.array[1][3];
	dst.z = m.array[2][0] * v.x + m.array[2][1] * v.y
			+ m.array[2][2] * v.z + m.array[2][3];
	return (dst);
}
