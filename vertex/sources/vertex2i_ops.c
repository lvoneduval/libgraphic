#include "../includes/vertex.h"

t_vertex2i	ft_vertex2i_new(int x, int y)
{
	t_vertex2i	dst;

	dst.x = x;
	dst.y = y;
	return (dst);
}

/*
**  -> Create null t_vertex2i
*/

t_vertex2i ft_vertex2i_null()
{
  t_vertex2i  dst;

  dst.x = 0;
  dst.y = 0;
  return(dst);
}

/*
**	->	Add two t_vertex2i : v1 + v2
*/

t_vertex2i	ft_vertex2i_add(t_vertex2i v1, t_vertex2i v2)
{
	t_vertex2i	dst;

	dst.x = v1.x + v2.x;
	dst.y = v1.y + v2.y;
	return (dst);
}

/*
**	->	Substract two t_vertex2i : v1 - v2
*/

t_vertex2i	ft_vertex2i_sub(t_vertex2i v1, t_vertex2i v2)
{
	t_vertex2i	dt;

	dst.x = v1.x - v2.x;
	dst.y = v1.y - v2.y;
	return (dst);
}

/*
**	->	Multiply two t_vertex2i : v1 * v2
*/

t_vertex2i	ft_vertex2i_mul(t_vertex2i v1, t_vertex2i v2)
{
	t_vertex2i	dst;

	dst.x = v1.x * v2.x;
	dst.y = v1.y * v2.y;
	return (dst);
}

/*
**	->	Divide two t_vertex2i : v1 / v2
*/

t_vertex2i	ft_vertex2i_div(t_vertex2i v1, t_vertex2i v2)
{
	t_vertex2i	dst;

	dst.x = v1.x / v2.x;
	dst.y = v1.y / v2.y;
	return (dst);
}

/*
**	->	Opposite t_vertex2i value : v = -v
*/

t_vertex2i	ft_vertex2i_opp(t_vertex2i v)
{
	t_vertex2i	dst;

	dst.x = -(v.x);
	dst.y = -(v.y);
	return (dst);
}
