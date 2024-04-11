#include "../includes/quaternion.h"

t_quat	ft_quat_dotnormalize(t_quat q)
{
	t_quat	dst;
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
