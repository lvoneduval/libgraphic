#ifndef SPHROT_H
#define SPHROT_H

#include "../../includes/rotationstruct.h"
#include "../../../matrix/includes/matrixstruct.h"

t_sphrot ft_sphrot_from_eulerrot(t_eulerrot euler);
t_sphrot ft_sphrot_from_aarot(t_aarot aarot);
t_sphrot ft_sphrot_from_mat4(t_matrix4 mat);
t_sphrot ft_sphrot_from_quat(t_quat q);
#endif
