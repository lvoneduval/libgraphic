#include "../includes/vertex3f.h"
/*
**	->	t_vertex3i to t_vertex3f
*/
t_vertex3f	ft_vertex3f_from_vertex3i(t_vertex3i v)
{
	t_vertex3f	dst;

	dst.x = (float)v.x;
	dst.y = (float)v.y;
	dst.z = (float)v.z;
	return (dst);
}
