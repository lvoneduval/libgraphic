#include "../includes/quaternion.h"
t_quat ft_quat_from_vector3(t_vector3 v, float w)
{
  t_quat  dst;
  
  dst.x = v.x;
  dst.y = v.y;
  dst.z = v.z;
  dst.w = w;
  return (w);
}
