t_matrix4	ft_view_mat4(t_vector3 eye, t_vector3 up,
							t_vector3 side, t_vector3 forward)
{
	t_matrix4	dst;

	dst.array[0][0] = side.x;
	dst.array[0][1] = side.y;
	dst.array[0][2] = side.z;
	dst.array[0][3] = -(ft_vector3_dotprod(eye, side));
	dst.array[1][0] = up.x;
	dst.array[1][1] = up.y;
	dst.array[1][2] = up.z;
	dst.array[1][3] = -(ft_vector3_dotprod(eye, up));
	dst.array[2][0] = forward.x;
	dst.array[2][1] = forward.y;
	dst.array[2][2] = forward.z;
	dst.array[2][3] = -(ft_vector3_dotprod(eye, forward));
	dst.array[3][0] = 0.0;
	dst.array[3][1] = 0.0;
	dst.array[3][2] = 0.0;
	dst.array[3][3] = 1.0;
	return (dst);
}
