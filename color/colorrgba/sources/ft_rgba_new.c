#include "../includes/colorrgba.h"

t_colorrgba	ft_rgba_new(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha)
{
	t_colorrgba	dst;

	dst.red = red;
	dst.green = green;
	dst.blue = blue;
	dst.alpha = alpha;
	return (dst);
}
