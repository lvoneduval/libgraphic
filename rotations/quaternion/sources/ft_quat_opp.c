#include "../includes/quaternions.h"

/*
**	->	Opposite t_quater value : q = -q
*/

t_quater	ft_quat_opp(t_quater q)
{
	t_quater	dst;

	dst.w = q.w;
	dst.x = -(q.x);
	dst.y = -(q.y);
	dst.z = -(q.z);
	return (dst);
}
