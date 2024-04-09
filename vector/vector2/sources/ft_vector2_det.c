#include "../includes/vector2.h"
/*
** 	->	Calculate the determinant of two t_vector2
*/
float ft_vector2_det(t_vector2 v1, t_vector2 v2)
{
    return (v1.x * v2.y) - (v1.y * v2.x);
}
