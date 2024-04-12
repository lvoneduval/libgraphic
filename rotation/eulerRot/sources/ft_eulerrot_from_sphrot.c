#include "../includes/eulerrot.h"
#include "../../quaternion/includes/quaternion.h"
/*
** Converts a spherical rotation to Euler angles.
*/
t_eulerrot ft_eulerrot_from_sphrot(t_sphrot sphrot)
{
    t_quat quat;
    t_eulerrot euler;

    quat = ft_quat_from_sphrot(sphrot);
    euler = ft_eulerrot_from_quat(quat);
    return (euler);
}
