#include "../includes/vertex2i.h"
/*
**	->	Opposite t_vertex2i value : v = -v
*/
t_vertex2i	ft_vertex2i_opp(t_vertex2i v)
{
	t_vertex2i	dst;

	dst.x = -(v.x);
	dst.y = -(v.y);
	return (dst);
}
