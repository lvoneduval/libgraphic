#include "../includes/matrix4.h"
#include "../../../quaternion/includes/quaternion.h"

t_matrix4	ft_matrix4_from_quat(t_quat q)
{
	t_matrix4	dst;

	dst.array[0][0] = 1.0 - 2.0 * (q.y * q.y + q.z * q.z);
	dst.array[0][1] = 2.0 * (q.x * q.y - q.z * q.w);
	dst.array[0][2] = 2.0 * (q.x * q.z + q.y * q.w);
	dst.array[0][3] = 0.0;
	dst.array[1][0] = 2.0 * (q.x * q.y + q.z * q.w);
	dst.array[1][1] = 1.0 - 2.0 * (q.x * q.x + q.z * q.z);
	dst.array[1][2] = 2.0 * (q.y * q.z - q.x * q.w);
	dst.array[1][3] = 0.0;
	dst.array[2][0] = 2.0 * (q.x * q.z - q.y * q.w);
	dst.array[2][1] = 2.0 * (q.y * q.z + q.x * q.w);
	dst.array[2][2] = 1.0 - 2.0 * (q.x * q.x + q.y * q.y);
	dst.array[2][3] = 0.0;
	dst.array[3][0] = 0.0;
	dst.array[3][1] = 0.0;
	dst.array[3][2] = 0.0;
	dst.array[3][3] = 1.0;
	return (dst);
}
