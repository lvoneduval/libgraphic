#include "../includes/vertex3f.h"
/*
**  -> Create null t_vertex3f
*/
t_vertex3f ft_vertex3f_null()
{
  t_vertex3f  dst;
  dst.x = 0.0f;
  dst.y = 0.0f;
  dst.z = 0.0f;
  return(dst);
}
