#include "../includes/vertex3f.h"
t_vertex3f	ft_vertex3f_new(float x, float y, float z)
{
	t_vertex3f	dst;

	dst.x = x;
	dst.y = y;
	dst.z = z;
	return (dst);
}
