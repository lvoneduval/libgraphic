#include "../includes/vertex3i.h"
/*
**	->	Add two t_vertex3i : v1 + v2
*/
t_vertex3i	ft_vertex3i_add(t_vertex3i v1, t_vertex3i v2)
{
	t_vertex3i	dst;

	dst.x = v1.x + v2.x;
	dst.y = v1.y + v2.y;
	dst.z = v1.z + v2.z;
	return (dst);
}
