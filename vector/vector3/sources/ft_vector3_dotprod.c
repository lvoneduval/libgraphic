#include "../includes/vector3.h"
/*
**	->	Scalar product of two t_vector3
**		return the float result of v1 . v2
*/
float	ft_vector3_dotprod(t_vector3 v1, t_vector3 v2)
{
	return ((v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z));
}
