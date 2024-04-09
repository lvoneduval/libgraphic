#include "../includes/vector3.h"
t_vector3	ft_vector3_new(float x, float y, float z)
{
	t_vector3	dst;

	dst.x = x;
	dst.y = y;
	dst.z = z;
	return (dst);
}
