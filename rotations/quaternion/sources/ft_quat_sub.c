#include "../includes/quaternions.h"

/*
**	->	Substract two t_quater : q1 - q2
*/

t_quater	ft_quat_sub(t_quater q1, t_quater q2)
{
	t_quater	dst;

	dst.x = q1.x - q2.x;
	dst.y = q1.y - q2.y;
	dst.z = q1.z - q2.z;
	dst.w = q1.w - q2.w;
	return (dst);
}
