#include "../includes/debug.h"

void	print_vertex2i(t_vertex2i v)
{
	int		precision;

	precision = FLOAT_PRECISION;
	printf("{%2$ .*1$d %3$ .*1$d }",
											precision, v.x, v.y);
}

void	print_vector2(t_vector2 v)
{
	int		precision;

	precision = FLOAT_PRECISION;
	printf("{%2$ .*1$f %3$ .*1$f }",
											precision, v.x, v.y);
}

void	print_vector3(t_vector3 v)
{
	int		precision;

	precision = FLOAT_PRECISION;
	printf("{%2$ .*1$f %3$ .*1$f %4$ .*1$f }",
											precision, v.x, v.y, v.z);
}

void	print_quat(t_quat q)
{
	int		precision;

	precision = FLOAT_PRECISION;
	printf("(%2$ .*1$f){%3$ .*1$f %4$ .*1$f %5$ .*1$f }",
											precision, q.w, q.x, q.y, q.z);
}
