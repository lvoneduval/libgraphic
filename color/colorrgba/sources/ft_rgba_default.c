#include "../includes/colorrgba.h"

t_colorrgba	ft_rgba_default(void)
{
	t_colorrgba	dst;

	dst.red = DEFAULT_RED_VALUE;
	dst.green = DEFAULT_GREEN_VALUE;
	dst.blue = DEFAULT_BLUE_VALUE;
	dst.alpha = DEFAULT_ALPHA_VALUE;
	return (dst);
}
