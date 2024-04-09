#include "../includes/quaternions.h"

t_quater	ft_quat_sub_n(t_quater q, float n)
{
	t_quater	dst;

	dst.w = q.w - n;
	dst.x = q.x;
	dst.y = q.y;
	dst.z = q.z;
	return (dst);
}
