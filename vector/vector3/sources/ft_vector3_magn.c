#include "../includes/vector3.h"
#include <math.h>
/*
**	->	Magnitude t_vector3 value
**		return the lenght of v (float value)
*/
float	ft_vector3_magn(t_vector3 v)
{
	return (sqrtf(v.x * v.x + v.y * v.y + v.z * v.z));
}
