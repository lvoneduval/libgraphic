#include "../includes/vector3.h"
/*
** 	->	Vectorial product of two t_vector3 : v1 ^ v2 = - v2 ^ v1
*/
t_vector3	ft_vector3_crossprod(t_vector3 v1, t_vector3 v2)
{
	t_vector3	dst;

	dst.x = (v1.y * v2.z) - (v1.z * v2.y);
	dst.y = (v1.z * v2.x) - (v1.x * v2.z);
	dst.z = (v1.x * v2.y) - (v1.y * v2.x);
	return (dst);
}
