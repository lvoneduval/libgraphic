#ifndef SPHROT_H
#define SPHROT_H

#include <math.h>
#include "../../quaternion/includes/quaternion.h"

typedef struct  s_sphrot {
    float lat;   // Latitude angle in radians (often denoted as theta)
    float lon;  // Longitude angle in radians (often denoted as phi)
    float rad;      // Rotation angle in radians around the axis defined by latitude and longitude
}               t_sphrot;

t_sphrot ft_sphrot_from_quat(t_quat q);
#endif
