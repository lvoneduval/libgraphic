#include "../includes/quaternion.h"

t_quat	ft_quat_add(t_quat q1, t_quat q2)
{
	t_quat	dst;

	dst.w = q1.w + q2.w;
	dst.x = q1.x + q2.x;
	dst.y = q1.y + q2.y;
	dst.z = q1.z + q2.z;
	return (dst);
}
