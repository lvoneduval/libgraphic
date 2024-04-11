#include "../includes/quaternion.h"

t_quat	ft_quat_add_n(t_quat q, float n)
{
	t_quat	dst;

	dst.w = q.w + n;
	dst.x = q.x;
	dst.y = q.y;
	dst.z = q.z;
	return (dst);
}
