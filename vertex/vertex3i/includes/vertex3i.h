#ifndef VERTEX3I_H
# define VERTEX3I_H
typedef struct s_vertex3i {
  int x;
  int y;
  int z;
} t_vertex3i;
t_vertex3i ft_vertex3i_new(int x, int y);

// Macro pour déclarer les prototypes de fonctions pour un type de vertex donné
#define DEFINE_VERTEX_OPERATIONS(full_type, short_type) \
  full_type ft_##short_type##_null(); \
  full_type ft_##short_type##_add(full_type v1, full_type v2); \
  full_type ft_##short_type##_sub(full_type v1, full_type v2); \
  full_type ft_##short_type##_div(full_type v1, full_type v2); \
  full_type ft_##short_type##_mul(full_type v1, full_type v2); \
  full_type ft_##short_type##_opp(full_type v);
DEFINE_VERTEX_OPERATIONS(t_vertex3i, vertex3i)
#undef DEFINE_VERTEX_OPERATIONS 
#endif /* VERTEX_H */
