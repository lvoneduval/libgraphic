#ifndef VERTEX_H
# define VERTEX_H

typedef struct s_vertex2i {
  int x;
  int y;
} t_vertex2i;
t_vertex2i ft_vertex2i_new(int x, int y);

typedef struct s_vertex3i {
  int x;
  int y;
  int z;
} t_vertex3i;
t_vertex3i ft_vertex3i_new(int x, int y);

typedef struct s_vertex2f {
  float x;
  float y;
} t_vertex2f;
t_vertex2f ft_vertex2f_new(float x, float y);

typedef struct s_vertex3f {
  float x;
  float y;
  float z;
} t_vertex3f;
t_vertex3f ft_vertex3f_new(float x, float y, float z);

// Macro pour déclarer les prototypes de fonctions pour un type de vertex donné
#define DEFINE_VERTEX_OPERATIONS(full_type, short_type) \
  full_type ft_##short_type##_null(); \
  full_type ft_##short_type##_add(full_type v1, full_type v2); \
  full_type ft_##short_type##_sub(full_type v1, full_type v2); \
  full_type ft_##short_type##_div(full_type v1, full_type v2); \
  full_type ft_##short_type##_mul(full_type v1, full_type v2); \
  full_type ft_##short_type##_opp(full_type v);
DEFINE_VERTEX_OPERATIONS(t_vertex2i, vertex2i)
DEFINE_VERTEX_OPERATIONS(t_vertex3i, vertex3i)
DEFINE_VERTEX_OPERATIONS(t_vertex2f, vertex2f)
DEFINE_VERTEX_OPERATIONS(t_vertex3f, vertex3f)
#undef DEFINE_VERTEX_OPERATIONS 
#endif /* VERTEX_H */
