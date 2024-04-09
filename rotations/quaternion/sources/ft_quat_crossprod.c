#include "../includes/quaternion.h"

/*
** 	->	Vectorial product of two t_quat : q1 ^ q2 = - q2 ^ q1
*/

t_quat	ft_quat_crossprod(t_quat q1, t_quat q2)
{
	t_quat	dst;

	dst.x = (q1.y * q2.z) - (q1.z * q2.y);
	dst.y = (q1.z * q2.x) - (q1.x * q2.z);
	dst.z = (q1.x * q2.y) - (q1.y * q2.x);
	dst.w = 0.0;
	return (dst);
}
