#include "../includes/aarot.h"
#include "../../quaternion/includes/quaternion.h"
#include <math.h>
t_aarot   ft_aarot_from_quat(t_quat q)
{
	float		angle;
	float		norm;
 	t_aarot dst;
	
	q = ft_quat_normalize(q);
	angle = acosf(q.w) * 2;
	norm = sqrtf(q.x * q.x + q.y * q.y + q.z * q.z);
	dst.angle = angle;
	dst.x = q.x;
	dst.y = q.y;
	dst.z = q.z;
	if (norm > 0.0005)
	{
	  	dst.x /= norm;
		dst.y /= norm;
		dst.z /= norm;
	}
	return (dst);
}
