#ifndef MATRIX4_H
# define MATRIX4_H

#include "../../../rotation/includes/rotation.h"
#include <math.h>

typedef struct	s_matrix4
{
	float		array[4][4];
}               t_matrix4;

t_matrix4	ft_mat4_null(void);
t_matrix4	ft_mat4_identity(void);
t_matrix4	ft_mat4_from_aarot(t_aarot rot);
t_matrix4 	ft_mat4_from_eulerrot(t_eulerrot euler);
t_matrix4	ft_mat4_from_quat(t_quat q);
t_matrix4 	ft_mat4_from_sphrot(t_sphrot sphrot);

t_matrix4 	ft_mat4_mul(t_matrix4 m1, t_matrix4 m2);
t_matrix4	ft_mat4_scale_from_vector3(t_vector3 v);
t_matrix4	ft_mat4_translate_from_vector3(t_vector3 v);
t_matrix4	ft_transpose_mat4(t_matrix4 m);

t_quat		ft_mat4_postmul_norm_quat(t_quat q, t_matrix4 m);
t_quat		ft_mat4_postmul_quat(t_quat q, t_matrix4 m);
t_vector3	ft_mat4_postmul_vector3(t_vector3 v, t_matrix4 m);
t_quat		ft_mat4_premul_norm_quat(t_matrix4 m, t_quat q);
t_quat		ft_mat4_premul_quat(t_matrix4 m, t_quat q);
t_vector3	ft_mat4_premul_vector3(t_matrix4 m, t_vector3 v);

#endif