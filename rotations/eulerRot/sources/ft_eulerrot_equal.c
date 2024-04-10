#include "../includes/euleurrot.h"

int ft_eulerrot_equal(t_eulerrot a, t_eulerrot b, float tolerance)
{
  return fabs(a.x - b.x) < tolerance && 
    fabs(a.y - b.y) < tolerance && 
    fabs(a.z - b.z) < tolerance;
}
