#include "../includes/vertex3f.h"
/*
**	->	Add two t_vertex3f : v1 + v2
*/
t_vertex3f	ft_vertex3f_add(t_vertex3f v1, t_vertex3f v2)
{
	t_vertex3f	dst;

	dst.x = v1.x + v2.x;
	dst.y = v1.y + v2.y;
	dst.z = v1.z + v2.z;
	return (dst);
}
