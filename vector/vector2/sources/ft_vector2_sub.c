#include "../includes/vector2.h"
/*
**	->	Substract two t_vector2 : v1 - v2
*/
t_vector2	ft_vector2_sub(t_vector2 v1, t_vector2 v2)
{
	t_vector2	dst;

	dst.x = v1.x - v2.x;
	dst.y = v1.y - v2.y;
	return (dst);
}
