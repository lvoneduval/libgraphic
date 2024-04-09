#include "../includes/vector3.h"
/*
**  -> Equality of two t_vector3
*/
int		ft_vector3_equal(t_vector3 v1, t_vector3 v2)
{
	if (v1.x != v2.x || v1.y != v2.y || v1.z != v2.z)
		return (0);
	return (1);
}
