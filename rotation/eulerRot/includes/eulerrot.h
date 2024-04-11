#ifndef EULEURROT_H
# define EURLEURROT_H

#include "../../../matrix/includes/matrix.h"
#include "../../axeAngleRot/includes/aarot.h"
#include "../../quaternion/includes/quaternion.h"
#include "../../sphericRot/includes/sphrot.h"

typedef struct  s_eulerrot {
    float x;   // Rotation around the X-axis
    float y;  // Rotation around the Y-axis
    float z;    // Rotation around the Z-axis
}               t_eulerrot;

t_eulerrot  ft_eulerrot_new(float x, float y, float z);
t_eulerrot  ft_eulerrot_from_aarot(t_aarot aarot);
t_eulerrot  ft_eulerrot_from_mat4(t_matrix4 mat);
t_eulerrot  ft_eulerrot_from_quat(t_quat quat);
t_eulerrot  ft_eulerrot_from_sphrot(t_sphrot sphrot);

t_eulerrot  ft_eulerrot_add(t_eulerrot a, t_eulerrot b);
t_eulerrot  ft_eulerrot_sub(t_eulerrot a, t_eulerrot b);
int         ft_eulerrot_equal(t_eulerrot a, t_eulerrot b, float tolerance);
t_eulerrot  ft_eulerrot_lerp(t_eulerrot a, t_eulerrot b, float t);
#endif
