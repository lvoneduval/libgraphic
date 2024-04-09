
/*
**	->	Convert t_quat to t_vector3
*/
t_vector3	ft_vector3_from_quat(t_quat q)
{
	t_vector3	dst;

	dst.x = q.x / q.w;
	dst.y = q.y / q.w;
	dst.z = q.z / q.w;
	return (dst);
}
