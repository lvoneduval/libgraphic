#include "../includes/matrix.h"

t_matrix4	ft_mat4_translate_from_vector3(t_vector3 v)
{
	t_matrix4	dst;

	dst.array[0][0] = 1.0;
	dst.array[0][1] = 0.0;
	dst.array[0][2] = 0.0;
	dst.array[0][3] = v.x;
	dst.array[1][0] = 0.0;
	dst.array[1][1] = 1.0;
	dst.array[1][2] = 0.0;
	dst.array[1][3] = v.y;
	dst.array[2][0] = 0.0;
	dst.array[2][1] = 0.0;
	dst.array[2][2] = 1.0;
	dst.array[2][3] = v.z;
	dst.array[3][0] = 0.0;
	dst.array[3][1] = 0.0;
	dst.array[3][2] = 0.0;
	dst.array[3][3] = 1.0;
	return (dst);
}
