#ifndef VERTEX2F_H
# define VERTEX2F_H

#include "../../includes/vertexstruct.h"
t_vertex2f	ft_vertex2f_new(float x, float y);

// Macro pour déclarer les prototypes de fonctions pour un type de vertex donné
#define DEFINE_VERTEX_OPERATIONS(full_type, short_type) \
  full_type ft_##short_type##_null(); \
  full_type ft_##short_type##_add(full_type v1, full_type v2); \
  full_type ft_##short_type##_sub(full_type v1, full_type v2); \
  full_type ft_##short_type##_div(full_type v1, full_type v2); \
  full_type ft_##short_type##_mul(full_type v1, full_type v2); \
  full_type ft_##short_type##_opp(full_type v);
DEFINE_VERTEX_OPERATIONS(t_vertex2f, vertex2f)
#undef DEFINE_VERTEX_OPERATIONS 
#endif
