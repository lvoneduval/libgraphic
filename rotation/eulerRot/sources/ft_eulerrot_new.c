#include "../includes/eulerrot.h"

t_eulerrot ft_eulerrot_new(float x, float y, float z)
{
  t_eulerrot rot;

  rot.x = x;
  rot.y = y;
  rot.z = z;
  return rot;
}
