#include "../includes/vector2.h"
#include <math.h>
/*
**  -> Create t_vector2 with the same direction and
**  orientation as v and a magnitude of 1.
*/
t_vector2	ft_vector2_normalize(t_vector2 v)
{
	t_vector2	dst;
	float		norm;
	float		norm_inv;

	dst.x = v.x;
	dst.y = v.y;
	norm = sqrtf(v.x * v.x + v.y * v.y);
	if (norm != 0.0)
	{
		norm_inv = 1.0 / norm;
		dst.x *= norm_inv;
		dst.y *= norm_inv;
	}
	return (dst);
}
