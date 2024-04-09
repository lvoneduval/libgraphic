#include "../includes/vertex3f.h"
/*
**	->	Opposite t_vertex3f value : v = -v
*/
t_vertex3f	ft_vertex3f_opp(t_vertex3f v)
{
	t_vertex3f	dst;

	dst.x = -(v.x);
	dst.y = -(v.y);
	dst.z = -(v.z);
	return (dst);
}
