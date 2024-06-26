#include "../includes/quaternion.h"
#include <math.h>

t_quat	ft_quat_normalize(t_quat q)
{
	t_quat	dst;
	float		norm;
	float		norm_inv;

	dst.x = q.x;
	dst.y = q.y;
	dst.z = q.z;
	dst.w = q.w;
	norm = sqrtf(q.x * q.x + q.y * q.y + q.z * q.z + q.w * q.w);
	if (norm != 0.0)
	{
		norm_inv = 1.0 / norm;
		dst.x *= norm_inv;
		dst.y *= norm_inv;
		dst.z *= norm_inv;
		dst.w *= norm_inv;
	}
	return (dst);
}
