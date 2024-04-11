#include "../includes/eulerrot.h"

t_eulerrot ft_eulerrot_lerp(t_eulerrot a, t_eulerrot b, float t)
{
  t_eulerrot result;

  result.x = a.x + t * (b.x - a.x);
  result.y = a.y + t * (b.y - a.y);
  result.z = a.z + t * (b.z - a.z);
  return result;
}
