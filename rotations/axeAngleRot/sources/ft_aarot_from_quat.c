#include <math.h>
#include "../../quaternion/includes/quaternion.h"

t_aarot   ft_aarot_from_quat(t_quat q)
{
	float		angle;
	float		norm;
  t_aarot dst;
	
  q = ft_quat_normalize(q);
	angle = acosf(q.w) * 2;
	norm = sqrtf(q.x * q.x + q.y * q.y + q.z * q.z);
	dst_angle = angle;
  dst_x = q.x;
	dst_y = q.y;
	dst_z = q.z;
	if (norm > 0.0005)
	{
	  dst_x /= norm;
		dst_y /= norm;
		dst_z /= norm;
	}
	return (dst);
}
