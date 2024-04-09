#include "../includes/vector.h"
#include <math.h>

t_vector3	ft_vector3_new(float x, float y, float z)
{
	t_vector3	dst;

	dst.x = x;
	dst.y = y;
	dst.z = z;
	return (dst);
}

/*
**	->	Add two t_vector3 : v1 + v2
*/
t_vector3	ft_vector3_add(t_vector3 v1, t_vector3 v2)
{
	t_vector3	dst;

	dst.x = v1.x + v2.x;
	dst.y = v1.y + v2.y;
	dst.z = v1.z + v2.z;
	return (dst);
}

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

/*
**	->	Scalar product of two t_vector3
**		return the float result of v1 . v2
*/
float	ft_vector3_dotprod(t_vector3 v1, t_vector3 v2)
{
	return ((v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z));
}


/*
**  -> Equality of two t_vector3
*/
int		ft_vector3_equal(t_vector3 v1, t_vector3 v2)
{
	if (v1.x != v2.x || v1.y != v2.y || v1.z != v2.z)
		return (0);
	return (1);
}

/*
**	->	Magnitude t_vector3 value
**		return the lenght of v (float value)
*/
float	ft_vector3_magn(t_vector3 v)
{
	return (sqrtf(v.x * v.x + v.y * v.y + v.z * v.z));
}

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

/*
**	->	Opposite t_vector3 value
*/
t_vector3	ft_vector3_opp(t_vector3 v)
{
	t_vector3	dst;

	dst.x = -(v.x);
	dst.y = -(v.y);
	dst.z = -(v.z);
	return (dst);
}
