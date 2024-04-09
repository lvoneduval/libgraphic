#ifndef QUATERNION_H
# define QUATERNION_H

#include "../../axeAngleRot/includes/aarot.h"
#include "../../sphericRot/includes/sphrot.h"
#include "../../../vector/vector3/includes/vector3.h"
#include "../../../matrix/matrix4/includes/matrix4.h"

#include <math.h>

typedef struct s_quat
{
  float x;
  float y;
  float z;
  float w;
}             t_quat 

// ft_quat_constructors
t_quat	ft_quat_new(float x, float y, float z, float w);
t_quat  ft_quat_from_vector3(t_vector3 v, float w);
t_quat	ft_quat_from_rot(t_aarot rot);
t_quat	ft_quat_from_spheric_rot(t_sphrot rot);
t_quat	ft_quat_from_mat4(t_matrix4 m);

// ft_quat_basic_op.c
t_quat  ft_quat_add(t_quat q1, t_quat q2);
t_quat  ft_quat_sub(t_quat q1, t_quat q2);
t_quat  ft_quat_opp(t_quat q);
t_quat  ft_quat_conj(t_quat q);

t_quat  ft_quat_add_r(t_quat q, float r);
t_quat  ft_quat_sub_r(t_quat q, float r);
t_quat  ft_quat_scale(t_quat q, float r);

t_quat  ft_quat_mul(t_quat q1, t_quat q2);
t_quat  ft_quat_crosprod(t_quat q1, t_quat q2);
t_quat  ft_quat_normalize(t_quat q);

#endif