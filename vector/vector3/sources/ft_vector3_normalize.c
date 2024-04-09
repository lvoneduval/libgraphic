#include "../includes/vector3.h"
#include <math.h>
/*
**  -> Create t_vector3 with the same direction and
**  orientation as v and a magnitude of 1.
*/
t_vector3	ft_vec3_normalize(t_vector3 v)
{
	t_vector3	dst;
	float		norm;
	float		norm_inv;

	dst.x = v.x;
	dst.y = v.y;
	dst.z = v.z;
	norm = sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
	if (norm != 0.0)
	{
		norm_inv = 1.0 / norm;
		dst.x *= norm_inv;
		dst.y *= norm_inv;
		dst.z *= norm_inv;
	}
	return (dst);
}
