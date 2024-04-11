#include "../includes/colorrgb.h"

t_colorrgb	ft_rgb_lerp(t_colorrgb a, t_colorrgb b, float i)
{
	t_colorrgb	shade;

	shade.red = a.red + (b.red - a.red) * i;
	shade.green = a.green + (b.green - a.green) * i;
	shade.blue = a.blue + (b.blue - a.blue) * i;
	return (shade);
}
