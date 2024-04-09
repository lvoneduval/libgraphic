#include "../includes/vector2.h"
/*
**	->	Scalar product of two t_vector2
**		return the float result of v1 . v2
*/
float	ft_vector2_dotprod(t_vector2 v1, t_vector2 v2)
{
	return ((v1.x * v2.x) + (v1.y * v2.y));
}
