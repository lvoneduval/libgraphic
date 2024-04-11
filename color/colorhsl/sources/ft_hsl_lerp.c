#include "../includes/colorhsl.h"

t_colorhsl ft_hsl_lerp(t_colorhsl a, t_colorhsl b, float i)
{
    t_colorhsl shade;

    shade.hue = a.hue + (b.hue - a.hue) * i;
    shade.saturation = a.saturation + (b.saturation - a.saturation) * i;
    shade.lightness = a.lightness + (b.lightness - a.lightness) * i;
    return (shade);
}
