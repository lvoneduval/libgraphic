#include "../includes/aarot.h"

t_aarot ft_aarot_normalize(t_aarot rot)
{
    float norm;
    t_aarot normalized_rot;

    norm = sqrtf(rot.x * rot.x + rot.y * rot.y + rot.z * rot.z);
    if (norm > 0.0f)
    {
        normalized_rot.x = rot.x / norm;
        normalized_rot.y = rot.y / norm;
        normalized_rot.z = rot.z / norm;
    }
    else
    {
        normalized_rot = rot;
    }
    normalized_rot.angle = rot.angle;
    return (normalized_rot);
}
