#include "../includes/quaternion.h"

t_quat	ft_quat_inv(t_quat q)
{
	t_quat	dst;
	float		n;

	n = q.w * q.w + q.x * q.x + q.y * q.y + q.z * q.z;
	dst.w = q.w / n;
	dst.x = -(q.x) / n;
	dst.y = -(q.y) / n;
	dst.z = -(q.z) / n;
	return (dst);
}
