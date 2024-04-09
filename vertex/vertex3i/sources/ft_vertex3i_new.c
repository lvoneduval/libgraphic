#include "../includes/vertex3i.h"
t_vertex3i	ft_vertex3i_new(int x, int y, int z)
{
	t_vertex3i	dst;

	dst.x = x;
	dst.y = y;
	dst.z = z;
	return (dst);
}
