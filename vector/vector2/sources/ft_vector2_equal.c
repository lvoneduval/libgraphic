#include "../includes/vector2.h"
/*
**  -> Equality of two t_vector2
*/
int		ft_vector2_equal(t_vector2 v1, t_vector2 v2)
{
	if (v1.x != v2.x || v1.y != v2.y)
		return (0);
	return (1);
}
