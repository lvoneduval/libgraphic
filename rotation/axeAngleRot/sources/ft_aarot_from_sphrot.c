
#include "../includes/aarot.h"
t_aarot ft_aarot_from_sphrot(t_sphrot sphrot)
{
    t_aarot aarot;

    aarot.x = cosf(sphrot.lat) * sinf(sphrot.lon);
    aarot.y = sinf(sphrot.lat);
    aarot.z = cosf(sphrot.lat) * cosf(sphrot.lon);
    aarot.angle = sphrot.angle;
    return aarot;
}
