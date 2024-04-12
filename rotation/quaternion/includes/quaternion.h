#ifndef QUATERNION_H
# define QUATERNION_H

#include "../../includes/rotationstruct.h"
#include "../../../matrix/includes/matrixstruct.h"
#include "../../../vector/includes/vectorstruct.h"
#include "../../../vertex/includes/vertexstruct.h"

// ft_quat_constructors
t_quat	ft_quat_new(float x, float y, float z, float w);
t_quat	ft_quat_from_aarot(t_aarot rot);
t_quat  ft_quat_from_eulerrot(t_eulerrot euler);
t_quat	ft_quat_from_mat4(t_matrix4 m);
t_quat	ft_quat_from_sphrot(t_sphrot rot);
t_quat  ft_quat_from_vector3(t_vector3 v, float w);

int		  ft_quat_equal(t_quat q1, t_quat q2);
t_quat	ft_quat_add(t_quat q1, t_quat q2);
t_quat	ft_quat_sub(t_quat q1, t_quat q2);
t_quat	ft_quat_mul(t_quat q1, t_quat q2);
t_quat	ft_quat_scale(t_quat q, float n);
t_quat	ft_quat_inv(t_quat q);
t_quat	ft_quat_opp(t_quat q);
t_quat	ft_quat_neg(t_quat q);
t_quat	ft_quat_normalize(t_quat q);
float   ft_quat_magn(t_quat q);
t_quat	ft_quat_dotnormalize(t_quat q);

t_quat	ft_quat_add_n(t_quat q, float n);
t_quat	ft_quat_sub_n(t_quat q, float n);

t_quat	ft_quat_crossprod(t_quat q1, t_quat q2);
float   ft_quat_dotprod(t_quat q1, t_quat q2);
t_quat	ft_quat_lerp(t_quat a, t_quat b, float alpha);
t_quat  ft_quat_slerp(t_quat a, t_quat b, float alpha);

#endif
