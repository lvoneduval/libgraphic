#include "../includes/quaternion.h"

/*
**	->	Scalar product of two t_quat
**		return the float result of q1 . q2
*/
float	ft_quat_dotprod(t_quat q1, t_quat q2)
{
	return ((q1.x * q2.x) + (q1.y * q2.y)
						+ (q1.z * q2.z) + (q1.w * q2.w));
}
