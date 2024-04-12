#include "../includes/sphrot.h"
#include "../../quaternion/includes/quaternion.h"
#include <math.h>
/*
** Converts a 4x4 rotation matrix to a spherical rotation.
*/
t_sphrot ft_sphrot_from_mat4(t_matrix4 mat)
{
    t_quat quat;
    t_sphrot sphrot;

    quat = ft_quat_from_mat4(mat);
    sphrot = ft_sphrot_from_quat(quat);
    return (sphrot);
}
