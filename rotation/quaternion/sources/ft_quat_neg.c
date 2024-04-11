#include "../includes/quaternion.h"

t_quat	ft_quat_neg(t_quat q)
{
	t_quat	dst;

	dst.w = -(q.w);
	dst.x = -(q.x);
	dst.y = -(q.y);
	dst.z = -(q.z);
	return (dst);
}
