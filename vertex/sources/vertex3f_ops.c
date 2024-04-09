#include "../includes/vertex.h"

t_vertex3f	ft_vertex3f_new(float x, float y, float z)
{
	t_vertex3f	dst;

	dst.x = x;
	dst.y = y;
	dst.z = z;
	return (dst);
}

/*
**  -> Create null t_vertex3f
*/

t_vertex3f ft_vertex3f_null()
{
  t_vertex3f  dst;
  dst.x = 0.0f;
  dst.y = 0.0f;
  dst.z = 0.0f;
  return(dst);
}

/*
**	->	Add two t_vertex3f : v1 + v2
*/

t_vertex3f	ft_vertex3f_add(t_vertex3f v1, t_vertex3f v2)
{
	t_vertex3f	dst;

	dst.x = v1.x + v2.x;
	dst.y = v1.y + v2.y;
	dst.z = v1.z + v2.z;
	return (dst);
}

/*
**	->	Substract two t_vertex3f : v1 - v2
*/

t_vertex3f	ft_vertex3f_sub(t_vertex3f v1, t_vertex3f v2)
{
	t_vertex3f	dst;

	dst.x = v1.x - v2.x;
	dst.y = v1.y - v2.y;
	dst.z = v1.z - v2.z;
	return (dst);
}

/*
**	->	Multiply two t_vertex3f : v1 * v2
*/

t_vertex3f	ft_vertex3f_mul(t_vertex3f v1, t_vertex3f v2)
{
	t_vertex3f	dst;

	dst.x = v1.x * v2.x;
	dst.y = v1.y * v2.y;
	dst.z = v1.z * v2.z;
	return (dst);
}

/*
**	->	Divide two t_vertex3f : v1 / v2
*/

t_vertex3f	ft_vertex3f_div(t_vertex3f v1, t_vertex3f v2)
{
	t_vertex3f	dst;

	dst.x = v1.x / v2.x;
	dst.y = v1.y / v2.y;
	dst.z = v1.z / v2.z;
	return (dst);
}

/*
**	->	Opposite t_vertex3f value : v = -v
*/

t_vertex3f	ft_vertex3f_opp(t_vertex3f v)
{
	t_vertex3f	dst;

	dst.x = -(v.x);
	dst.y = -(v.y);
	dst.z = -(v.z);
	return (dst);
}

/*
**	->	t_vertex3i to t_vertex3f
*/

t_vertex3f	ft_vertex3f_from_ver3i(t_vertex3i v)
{
	t_vertex3f	dst;

	dst.x = (float)v.x;
	dst.y = (float)v.y;
	dst.z = (float)v.z;
	return (dst);
}
