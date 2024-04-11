#include "../includes/quaternion.h"

float	ft_quat_magn(t_quat q)
{
	return (sqrtf(q.x * q.x + q.y * q.y + q.z * q.z + q.w * q.w));
}
