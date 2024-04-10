#include "../includes/matrix4.h"
t_matrix4			ft_mat4_from_aarot(t_aarot rot)
{
 	t_matrix4	dst;
	float     s;
	float     c;
	float     t;

	rot = ft_aarot_normalize(rot);
	s = sinf(rot.rad);
	c = cosf(rot.rad);
	t = 1.0 - c;
	dst.array[0][0] = (rot.x * rot.x * t) + c;
	dst.array[0][1] = (rot.x * rot.y * t) - (rot.z * s);
	dst.array[0][2] = (rot.x * rot.z * t) + (rot.y * s);
	dst.array[0][3] = 0.0;
	dst.array[1][0] = (rot.y * rot.x * t) + (rot.z * s);
	dst.array[1][1] = (rot.y * rot.y * t) + c;
	dst.array[1][2] = (rot.y * rot.z * t) - (rot.x * s);
	dst.array[1][3] = 0.0;
	dst.array[2][0] = (rot.z * rot.x * t) - (rot.y * s);
	dst.array[2][1] = (rot.z * rot.y * t) + (rot.x * s);
	dst.array[2][2] = (rot.z * rot.z * t) + c;
	dst.array[2][3] = 0.0;
	dst.array[3][0] = 0.0;
	dst.array[3][1] = 0.0;
	dst.array[3][2] = 0.0;
	dst.array[3][3] = 1.0;
	return (dst);
}