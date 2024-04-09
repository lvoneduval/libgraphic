#include "../includes/vertex2f.h"
/*
**	->	Multiply two t_vertex2f : v1 * v2
*/

t_vertex2f	ft_vertex2f_mul(t_vertex2f v1, t_vertex2f v2)
{
	t_vertex2f	dst;

	dst.x = v1.x * v2.x;
	dst.y = v1.y * v2.y;
	return (dst);
}
