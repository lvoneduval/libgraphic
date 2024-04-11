#include "../includes/colorrgba.h"

t_colorrgba	ft_rgba_sub(t_colorrgba color, t_colorrgba sub)
{
	color.red -= sub.red;
	color.green -= sub.green;
	color.blue -= sub.blue;
	color.alpha -= sub.alpha;
	return (color);
}
