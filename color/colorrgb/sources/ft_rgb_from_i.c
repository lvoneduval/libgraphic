#include "../includes/colorrgb.h"

t_colorrgb		ft_rgb_from_i(int color)
{
	t_colorrgb		dst;

	dst.blue = color & 0xFF;
	dst.green = (color >> 8) & 0xFF;
	dst.red = (color >> 16) & 0xFF;
	return (dst);
}
