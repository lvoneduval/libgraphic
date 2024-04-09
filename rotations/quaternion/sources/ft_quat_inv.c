#include "../includes/quaternions.h"

t_quater	ft_quat_inv(t_quater q)
{
	t_quater	dst;
	float		n;

	n = q.w * q.w + q.x * q.x + q.y * q.y + q.z * q.z;
	dst.w = q.w / n;
	dst.x = -(q.x) / n;
	dst.y = -(q.y) / n;
	dst.z = -(q.z) / n;
	return (dst);
}
