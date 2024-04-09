#include "../includes/quaternions.h"

int		ft_quat_equal(t_quater q1, t_quater q2)
{
	if (q1.w != q2.w || q1.x != q2.x || q1.y != q2.y || q1.z != q2.z)
		return (0);
	return (1);
}
