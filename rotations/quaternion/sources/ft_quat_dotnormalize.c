#include "../includes/quaternions.h"

t_quater	ft_quat_dotnormalize(t_quater q)
{
	t_quater	dst;
	float		w_inv;

	dst.x = q.x;
	dst.y = q.y;
	dst.z = q.z;
	dst.w = q.w;
	if (q.w != 0)
	{
		w_inv = 1.0 / q.w;
		dst.x *= w_inv;
		dst.y *= w_inv;
		dst.z *= w_inv;
		dst.w *= w_inv;
	}
	return (dst);
}
