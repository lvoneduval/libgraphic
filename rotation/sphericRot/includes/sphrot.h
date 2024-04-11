#ifndef SPHROT_H
#define SPHROT_H

#include <math.h>
#include "../../quaternion/includes/quaternion.h"

typedef struct  s_sphrot {
    float lat;   // Latitude angle in radians (often denoted as theta)
    float lon;  // Longitude angle in radians (often denoted as phi)
    float angle;      // Rotation angle in radians around the axis defined by latitude and longitude
}               t_sphrot;

t_sphrot ft_sphrot_from_eulerrot(t_eulerrot euler);
t_sphrot ft_sphrot_from_aarot(t_aarot aarot);
t_sphrot ft_sphrot_from_mat4(t_matrix4 mat);
t_sphrot ft_sphrot_from_quat(t_quat q);
#endif
