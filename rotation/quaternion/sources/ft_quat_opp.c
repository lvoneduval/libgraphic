#include "../includes/quaternion.h"

/*
**	->	Opposite t_quat value : q = -q
*/
t_quat	ft_quat_opp(t_quat q)
{
	t_quat	dst;

	dst.w = q.w;
	dst.x = -(q.x);
	dst.y = -(q.y);
	dst.z = -(q.z);
	return (dst);
}
