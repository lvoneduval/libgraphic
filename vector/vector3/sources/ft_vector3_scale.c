#include "../includes/vector3.h"
/*
**	->	Multiply a vector with a scalar : v * n
*/
t_vector3		ft_vector3_scale(t_vector3 v, float n)
{
	t_vector3	dst;

	dst.x = v.x * n;
	dst.y = v.y * n;
	dst.z = v.z * n;
	return (dst);
}
