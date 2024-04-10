t_vertex2i	ft_ver3f_proj(t_vertex3f v, t_matrix4 m, int width, int height)
{
	t_quater	clip;
	t_vector3	ndc;
	t_vertex2i	proj;

	clip = ft_to_quat(v.x, v.y, v.z, 1.0);
	clip = ft_mat4_postmul_quat(clip, m);
	ndc = ft_quat_to_vec3(clip);
	proj = ft_viewport_tlc(ndc, ft_to_ver2i(0, 0), width, height);
	proj.color = v.color;
	return (proj);
}
