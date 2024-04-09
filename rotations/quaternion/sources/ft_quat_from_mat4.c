#include "../includes/quaternion.h"
t_quat	ft_quat_from_mat4(t_matrix4 m)
{
	t_quat	q;

	q.w = sqrtf(fmaxf(0,
				(1 + m.array[0][0] + m.array[1][1] + m.array[2][2]))) / 2;
	q.x = sqrtf(fmaxf(0,
				(1 + m.array[0][0] - m.array[1][1] - m.array[2][2]))) / 2;
	q.y = sqrtf(fmaxf(0,
				(1 - m.array[0][0] + m.array[1][1] - m.array[2][2]))) / 2;
	q.z = sqrtf(fmaxf(0,
				(1 - m.array[0][0] - m.array[1][1] + m.array[2][2]))) / 2;
	q.x = copysignf(q.x, q.x * (m.array[2][1] - m.array[1][2]));
	q.y = copysignf(q.y, q.y * (m.array[0][2] - m.array[2][0]));
	q.z = copysignf(q.z, q.z * (m.array[1][0] - m.array[0][1]));
	return (q);
}
