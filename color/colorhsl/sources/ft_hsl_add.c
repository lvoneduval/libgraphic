#include "../includes/colorhsl.h"

t_colorhsl ft_hsl_add(t_colorhsl color, t_colorhsl add)
{
    color.hue += add.hue;
    color.saturation += add.saturation;
    color.lightness += add.lightness;
    return (color);
}
