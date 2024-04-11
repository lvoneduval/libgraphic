#include "../includes/matrix4.h"

t_matrix4	ft_mat4_null(void)
{
	t_matrix4	dst;

	dst.array[0][1] = 0.0;
	dst.array[0][2] = 0.0;
	dst.array[1][0] = 0.0;
	dst.array[1][2] = 0.0;
	dst.array[2][0] = 0.0;
	dst.array[2][1] = 0.0;
	dst.array[3][0] = 0.0;
	dst.array[3][1] = 0.0;
	dst.array[3][2] = 0.0;
	return (dst);
}
