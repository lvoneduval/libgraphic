#include "../includes/quaternions.h"
#include <math.h>
t_quat	ft_quat_from_spheric_rot(t_sphrot rot)
{
	t_quat	dst;
	float		sin_a;
	float		sin_lat;

	rot.rad *= 0.5;
	sin_a = sinf(rot.rad);
	sin_lat = sinf(rod.lat);
	dst.x = sin_a * cosf(rod.lat) * sinf(rot.lon);
	dst.y = sin_a * sin_lat;
	dst.z = sin_a * sin_lat * cosf(rot.lon);
	dst.w = cosf(rot.rad);
	return (dst);
}
