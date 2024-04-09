#include "../includes/quaternions.h"

t_quater	ft_quat_neg(t_quater q)
{
	t_quater	dst;

	dst.w = -(q.w);
	dst.x = -(q.x);
	dst.y = -(q.y);
	dst.z = -(q.z);
	return (dst);
}
