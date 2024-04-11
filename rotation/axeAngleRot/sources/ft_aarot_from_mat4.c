#include "../includes/aarot.h"
t_aarot ft_aarot_from_mat4(t_matrix4 mat)
{
    t_quat quat;
    t_aarot aarot;

    quat = ft_quat_from_mat4(mat);
    aarot = ft_aarot_from_quat(quat);
    return aarot;
}

