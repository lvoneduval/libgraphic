#include "../includes/g_math.h"

t_vertex2i	ft_ver3f_proj(t_vertex3f v, t_matrix4 m, int width, int height)
{
	t_quat	clip;
	t_vector3	ndc;
	t_vertex2i	proj;

	clip = ft_quat_new(v.x, v.y, v.z, 1.0);
	clip = ft_mat4_postmul_quat(clip, m);
	ndc = ft_vector3_from_quat(clip);
	proj = ft_viewport_tlc(ndc, ft_vertex2i_null(), width, height);
	//proj.color = v.color;
	return (proj);
	}
