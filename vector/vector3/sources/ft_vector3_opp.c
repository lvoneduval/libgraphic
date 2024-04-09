#include "../includes/vector3.h"
/*
**  ->  Opposite t_vector3 value : v = -v
*/
t_vector3 ft_vector3_opp(t_vector3 v)
{
  t_vector3 dst;

  dst.x = -(v.x);
  dst.y = -(v.y);
  dst.z = -(v.z);
  return (dst);
}