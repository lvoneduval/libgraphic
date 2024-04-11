#include "../includes/colorrgba.h"

int		ft_rgba_to_i(t_colorrgba color)
{
	int		dst;

	dst = color.blue | (color.green << 8) |
			(color.red << 16) | (color.alpha << 24);
	return (dst);
}
