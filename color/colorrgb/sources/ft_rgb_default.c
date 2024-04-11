#include "../includes/colorrgb.h"

t_colorrgb	ft_rgb_default(void)
{
	t_colorrgb	dst;

	dst.red = DEFAULT_RED_VALUE;
	dst.green = DEFAULT_GREEN_VALUE;
	dst.blue = DEFAULT_BLUE_VALUE;
	return (dst);
}
