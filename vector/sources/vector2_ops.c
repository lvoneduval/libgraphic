#include "../includes/vector.h"
#include <math.h>

t_vector2	ft_vector2_new(float x, float y)
{
	t_vector2	dst;

	dst.x = x;
	dst.y = y;
	return (dst);
}

/*
**	->	Add two t_vector2 : v1 + v2
*/
t_vector2	ft_vector2_add(t_vector2 v1, t_vector2 v2)
{
	t_vector2	dst;

	dst.x = v1.x + v2.x;
	dst.y = v1.y + v2.y;
	return (dst);
}

/*
**	->	Substract two t_vector2 : v1 - v2
*/
t_vector2	ft_vector2_sub(t_vector2 v1, t_vector2 v2)
{
	t_vector2	dst;

	dst.x = v1.x - v2.x;
	dst.y = v1.y - v2.y;
	return (dst);
}

/*
**	->	Multiply a vector with a scalar : v * n
*/
t_vector2		ft_vector2_scale(t_vector2 v, float n)
{
	t_vector2	dst;

	dst.x = v.x * n;
	dst.y = v.y * n;
	return (dst);
}


/*
** 	->	Calculate the determinant of two t_vector2
*/
float ft_vector2_det(t_vector2 v1, t_vector2 v2)
{
    return (v1.x * v2.y) - (v1.y * v2.x);
}

/*
**	->	Scalar product of two t_vector2
**		return the float result of v1 . v2
*/
float	ft_vector2_dotprod(t_vector2 v1, t_vector2 v2)
{
	return ((v1.x * v2.x) + (v1.y * v2.y));
}


/*
**  -> Equality of two t_vector2
*/
int		ft_vector2_equal(t_vector2 v1, t_vector2 v2)
{
	if (v1.x != v2.x || v1.y != v2.y)
		return (0);
	return (1);
}

/*
**	->	Magnitude t_vector2 value
**		return the lenght of v (float value)
*/
float	ft_vector2_magn(t_vector2 v)
{
	return (sqrtf(v.x * v.x + v.y * v.y));
}

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

/*
**	->	Opposite t_vector2 value
*/
t_vector2	ft_vector2_opp(t_vector2 v)
{
	t_vector2	dst;

	dst.x = -(v.x);
	dst.y = -(v.y);
	return (dst);
}
