#include "../includes/vertex3i.h"
/*
**	->	Opposite t_vertex3i value : v = -v
*/

t_vertex3i	ft_vertex3i_opp(t_vertex3i v)
{
	t_vertex3i	dst;

	dst.x = -(v.x);
	dst.y = -(v.y);
	dst.z = -(v.z);
	return (dst);
}
