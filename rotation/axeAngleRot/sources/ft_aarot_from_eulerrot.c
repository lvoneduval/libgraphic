#include "../includes/aarot.h"
#include "../../quaternion/includes/quaternion.h"
t_aarot ft_aarot_from_eulerrot(t_eulerrot euler)
{
    t_quat quat;
    t_aarot aarot;

    quat = ft_quat_from_eulerrot(euler);
    aarot = ft_aarot_from_quat(quat);
    return aarot;
}
