#include "../includes/vertex.h"

t_vertex2f	ft_vertex2f_new(float x, float y)
{
	t_vertex2f	dst;

	dst.x = x;
	dst.y = y;
	return (dst);
}

/*
**  -> Create null t_vertex2f
*/

t_vertex2f ft_vertex2f_null()
{
  t_vertex2f  dst;

  dst.x = 0.0f;
  dst.y = 0.0f;
  return(dst);
}

/*
**	->	Add two t_vertex2f : v1 + v2
*/

t_vertex2f	ft_vertex2f_add(t_vertex2f v1, t_vertex2f v2)
{
	t_vertex2f	dst;

	dst.x = v1.x + v2.x;
	dst.y = v1.y + v2.y;
	return (dst);
}

/*
**	->	Substract two t_vertex2f : v1 - v2
*/

t_vertex2f	ft_vertex2f_sub(t_vertex2f v1, t_vertex2f v2)
{
	t_vertex2f	dst;

	dst.x = v1.x - v2.x;
	dst.y = v1.y - v2.y;
	return (dst);
}

/*
**	->	Multiply two t_vertex2f : v1 * v2
*/

t_vertex2f	ft_vertex2f_mul(t_vertex2f v1, t_vertex2f v2)
{
	t_vertex2f	dst;

	dst.x = v1.x * v2.x;
	dst.y = v1.y * v2.y;
	return (dst);
}

/*
**	->	Divide two t_vertex2f : v1 / v2
*/

t_vertex2f	ft_vertex2f_div(t_vertex2f v1, t_vertex2f v2)
{
	t_vertex2f	dst;

	dst.x = v1.x / v2.x;
	dst.y = v1.y / v2.y;
	return (dst);
}

/*
**	->	Opposite t_vertex2f value : v = -v
*/

t_vertex2f	ft_vertex2f_opp(t_vertex2f v)
{
	t_vertex2f	dst;
	
  dst.x = -(v.x);
	dst.y = -(v.y);
	return (dst);
}
