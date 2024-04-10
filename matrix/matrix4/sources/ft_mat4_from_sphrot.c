#include "sphrot.h"
#include "matrix.h"
#include <math.h>

/*
** Converts a spherical rotation to a 4x4 rotation matrix.
** Using Rodrigues algorithme.
*/
t_matrix4 ft_matrix4_from_sphrot(t_sphrot sphrot)
{
    t_matrix4 mat;
    float s;
    float c;
    float t;

    float x = cosf(sphrot.lat) * sinf(sphrot.lon);
    float y = sinf(sphrot.lat);
    float z = cosf(sphrot.lat) * cosf(sphrot.lon);
    float angle = sphrot.angle;
    s = sinf(angle);
    c = cosf(angle);
    t = 1.0f - c;
    mat.array[0][0] = (x * x * t) + c;
    mat.array[0][1] = (x * y * t) - (z * s);
    mat.array[0][2] = (x * z * t) + (y * s);
    mat.array[0][3] = 0.0f;
    mat.array[1][0] = (y * x * t) + (z * s);
    mat.array[1][1] = (y * y * t) + c;
    mat.array[1][2] = (y * z * t) - (x * s);
    mat.array[1][3] = 0.0f;
    mat.array[2][0] = (z * x * t) - (y * s);
    mat.array[2][1] = (z * y * t) + (x * s);
    mat.array[2][2] = (z * z * t) + c;
    mat.array[2][3] = 0.0f;
    mat.array[3][0] = 0.0f;
    mat.array[3][1] = 0.0f;
    mat.array[3][2] = 0.0f;
    mat.array[3][3] = 1.0f;
    return (mat);
}
