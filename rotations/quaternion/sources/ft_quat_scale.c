#include "../includes/quaternions.h"

t_quater	ft_quat_scale(t_quater q, float n)
{
	t_quater	dst;

	dst.w = q.w * n;
	dst.x = q.x * n;
	dst.y = q.y * n;
	dst.z = q.z * n;
	return (dst);
}
