#include "../includes/vector2.h"
/*
**	->	Opposite t_vector2 value
*/
t_vector2	ft_vector2_opp(t_vector2 v)
{
	t_vector2	dst;

	dst.x = -(v.x);
	dst.y = -(v.y);
	return (dst);
}
