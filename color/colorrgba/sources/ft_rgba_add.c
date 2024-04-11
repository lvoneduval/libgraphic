#include "../includes/colorrgba.h"

t_colorrgba	ft_rgba_add(t_colorrgba color, t_colorrgba add)
{
	color.red += add.red;
	color.green += add.green;
	color.blue += add.blue;
	color.alpha += add.alpha;
	return (color);
}
