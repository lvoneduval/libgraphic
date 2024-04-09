#include "../includes/quaternions.h"

t_quater	ft_quat_mul(t_quater q1, t_quater q2)
{
	t_quater	dst;

	dst.w = q1.w * q2.w - q1.x * q2.x - q1.y * q2.y - q1.z * q2.z;
	dst.x = q1.w * q2.x + q1.x * q2.w - q1.y * q2.z + q1.z * q2.y;
	dst.y = q1.w * q2.y + q1.x * q2.z + q1.y * q2.w - q1.z * q2.x;
	dst.z = q1.w * q2.z - q1.x * q2.y + q1.y * q2.x + q1.z * q2.w;
	return (dst);
}
