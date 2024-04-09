#include "../includes/quaternions.h"
#include "../vector/vector3/includes/vector3.h"
t_quat ft_quat_from_vector3(t_vector3 v, float w)
{
  t_quat  dst;
  
  dst.x = v.x;
  dst.y = v.y;
  dst.z = v.z;
  dst.w = w;
  return (w);
}
