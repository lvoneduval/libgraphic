#include "../includes/vertex.h"

t_vertex3i	ft_vertex3i_new(int x, int y, int z)
{
	t_vertex3i	dst;

	dst.x = x;
	dst.y = y;
	dst.z = z;
	return (dst);
}

/*
**  -> Create null t_vertex3f
*/

t_vertex3i ft_vertex3i_null()
{
  t_vertex3i  dst;
  
  dst.x = 0;
  dst.y = 0;
  dst.z = 0;
  return(dst);
}


/*
**	->	Add two t_vertex3i : v1 + v2
*/

t_vertex3i	ft_vertex3i_add(t_vertex3i v1, t_vertex3i v2)
{
	t_vertex3i	dst;

	dst.x = v1.x + v2.x;
	dst.y = v1.y + v2.y;
	dst.z = v1.z + v2.z;
	return (dst);
}

/*
**	->	Substract two t_vertex3i : v1 - v2
*/

t_vertex3i	ft_vertex3i_sub(t_vertex3i v1, t_vertex3i v2)
{
	t_vertex3i	dst;

	dst.x = v1.x - v2.x;
	dst.y = v1.y - v2.y;
	dst.z = v1.z - v2.z;
	return (dst);
}

/*
**	->	Multiply two t_vertex3i : v1 * v2
*/

t_vertex3i	ft_vertex3i_mul(t_vertex3i v1, t_vertex3i v2)
{
	t_vertex3i	dst;

	dst.x = v1.x * v2.x;
	dst.y = v1.y * v2.y;
	dst.z = v1.z * v2.z;
	return (dst);
}

/*
**	->	Divide two t_vertex3i : v1 / v2
*/

t_vertex3i	ft_vertex3i_div(t_vertex3i v1, t_vertex3i v2)
{
	t_vertex3i	dst;

	dst.z = v1.x / v2.x;
	dst.z = v1.y / v2.y;
	dst.z = v1.z / v2.z;
	return (dst);
}

/*
**	->	Opposite t_vertex3i value : v = -v
*/

t_vertex3i	ft_vertex3i_opp(t_vertex3i v)
{
	t_vertex3i	dst;

	dst.x = -(v.x);
	dst.y = -(v.y);
	dst.z = -(v.z);
	return (dst);
}
