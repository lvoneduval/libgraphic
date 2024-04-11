#include "../includes/quaternion.h"

/*
**	->	Substract two t_quat : q1 - q2
*/
t_quat	ft_quat_sub(t_quat q1, t_quat q2)
{
	t_quat	dst;

	dst.x = q1.x - q2.x;
	dst.y = q1.y - q2.y;
	dst.z = q1.z - q2.z;
	dst.w = q1.w - q2.w;
	return (dst);
}
