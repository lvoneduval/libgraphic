#include "../includes/euleurrot.h"

t_eulerrot ft_eulerrot_add(t_eulerrot a, t_eulerrot b)
{
    t_eulerrot result;

    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    return result;
}
