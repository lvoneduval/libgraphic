#include "../includes/quaternion.h"
#include <math.h>
t_quat	ft_quat_from_aarot(t_aarot rot)
{
	t_quat	dst;
	float		s;

	rot.angle *= 0.5;
	s = sinf(rot.angle);
	dst.x = rot.x * s;
	dst.y = rot.y * s;
	dst.z = rot.z * s;
	dst.w = cosf(rot.angle);
	dst = ft_quat_normalize(dst);
	return (dst);
}
