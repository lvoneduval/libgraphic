#include "../includes/vertex3i.h"
/*
**	->	Divide two t_vertex3i : v1 / v2
*/

t_vertex3i	ft_vertex3i_div(t_vertex3i v1, t_vertex3i v2)
{
	t_vertex3i	dst;

	dst.z = v1.x / v2.x;
	dst.z = v1.y / v2.y;
	dst.z = v1.z / v2.z;
	return (dst);
}
