#include "../includes/quaternion.h"

t_quat	ft_quat_scale(t_quat q, float n)
{
	t_quat	dst;

	dst.w = q.w * n;
	dst.x = q.x * n;
	dst.y = q.y * n;
	dst.z = q.z * n;
	return (dst);
}
