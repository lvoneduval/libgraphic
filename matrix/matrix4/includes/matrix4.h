#ifndef MATRIX4_H
# define MATRIX4_H

#include "../../../roation/quaternion/includes/quaternion.h"

typedef struct	s_matrix4
{
	float		array[4][4];
}               t_matrix4;


t_matrix4	ft_matrix4_from_quat(t_quat q);
#endif