#include "../includes/vertex2i.h"
/*
**	->	Multiply two t_vertex2i : v1 * v2
*/
t_vertex2i	ft_vertex2i_mul(t_vertex2i v1, t_vertex2i v2)
{
	t_vertex2i	dst;

	dst.x = v1.x * v2.x;
	dst.y = v1.y * v2.y;
	return (dst);
}
