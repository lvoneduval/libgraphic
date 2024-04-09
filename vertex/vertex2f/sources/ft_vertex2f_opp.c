#include "../includes/vertex2f.h"
/*
**	->	Opposite t_vertex2f value : v = -v
*/
t_vertex2f	ft_vertex2f_opp(t_vertex2f v)
{
	t_vertex2f	dst;
	
  dst.x = -(v.x);
	dst.y = -(v.y);
	return (dst);
}
