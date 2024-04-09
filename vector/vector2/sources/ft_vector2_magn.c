#include "../includes/vector2.h"
#include <math.h>
/*
**	->	Magnitude t_vector2 value
**		return the lenght of v (float value)
*/
float	ft_vector2_magn(t_vector2 v)
{
	return (sqrtf(v.x * v.x + v.y * v.y));
}
