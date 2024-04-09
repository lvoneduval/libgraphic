#ifndef VERTEX3F_H
# define VERTEX3F_H
typedef struct s_vertex3f {
  float x;
  float y;
  float z;
} t_vertex3f;
t_vertex3f  ft_vertex3f_new(float x, float y, float z);
t_vertex3f	ft_vertex3f_from_vertex3i(t_vertex3i v);

// Macro pour déclarer les prototypes de fonctions pour un type de vertex donné
#define DEFINE_VERTEX_OPERATIONS(full_type, short_type) \
  full_type ft_##short_type##_null(); \
  full_type ft_##short_type##_add(full_type v1, full_type v2); \
  full_type ft_##short_type##_sub(full_type v1, full_type v2); \
  full_type ft_##short_type##_div(full_type v1, full_type v2); \
  full_type ft_##short_type##_mul(full_type v1, full_type v2); \
  full_type ft_##short_type##_opp(full_type v);
DEFINE_VERTEX_OPERATIONS(t_vertex3f, vertex3f)
#undef DEFINE_VERTEX_OPERATIONS 
#endif /* VERTEX_H */
