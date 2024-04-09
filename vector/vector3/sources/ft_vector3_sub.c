#include "../includes/vector3.h"
/*
**	.	Substract two t_vector3 : v1 - v2
*/
t_vector3	ft_vector3_sub(t_vector3 v1, t_vector3 v2)
{
	t_vector3	dst;

	dst.x = v1.x - v2.x;
	dst.y = v1.y - v2.y;
	dst.z = v1.z - v2.z;
	return (dst);
}
