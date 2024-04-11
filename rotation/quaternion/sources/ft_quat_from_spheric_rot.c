#include "../includes/quaternion.h"

t_quat	ft_quat_from_spheric_rot(t_sphrot rot)
{
	t_quat	dst;
	float		sin_a;
	float		sin_lat;

	rot.angle *= 0.5;
	sin_a = sinf(rot.angle);
	sin_lat = sinf(rot.lat);
	dst.x = sin_a * cosf(rot.lat) * sinf(rot.lon);
	dst.y = sin_a * sin_lat;
	dst.z = sin_a * sin_lat * cosf(rot.lon);
	dst.w = cosf(rot.angle);
	return (dst);
}
