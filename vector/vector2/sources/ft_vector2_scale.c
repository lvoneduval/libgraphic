#include "../includes/vector2.h"
#include <math.h>
/*
**	->	Multiply a vector with a scalar : v * n
*/
t_vector2		ft_vector2_scale(t_vector2 v, float n)
{
	t_vector2	dst;

	dst.x = v.x * n;
	dst.y = v.y * n;
	return (dst);
}
