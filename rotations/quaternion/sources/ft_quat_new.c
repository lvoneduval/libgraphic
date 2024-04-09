#include "../includes/quaternion.h"
t_quat	ft_quat_new(float x, float y, float z, float w)
{
	t_quat	dst;

	dst.x = x;
	dst.y = y;
	dst.z = z;
	dst.w = w;
	return (dst);
}
