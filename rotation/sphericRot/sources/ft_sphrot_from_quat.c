#include "../includes/sphrot.h"
#include <math.h>

t_sphrot ft_sphrot_from_quat(t_quat q)
{
    t_sphrot rot;
    float norm;
    
    norm = sqrtf(q.x * q.x + q.y * q.y + q.z * q.z);
    rot.angle = 2.0 * acosf(q.w);
    if (norm > 0.0005)
    {
        q.x /= norm;
        q.y /= norm;
        q.z /= norm;
    }
    rot.lat = asinf(q.y); // rot.lat = -(asinf(q.y)); ?
    if (q.x * q.x + q.z * q.z < 0.0005) 
        rot.lon = 0.0;
    else
        rot.lon = atan2f(q.z, q.x); //		rot.lon = atan2f(q.x, q.z); ??
    if (rot.lon < 0.0)
        rot.lon += 2 * M_PI;
    return rot;  // Retour de la structure de rotation sphérique calculée
}
