#include "../includes/colorhsl.h"

t_colorhsl ft_hsl_new(float hue, float saturation, float lightness)
{
    t_colorhsl dst;

    dst.hue = hue;
    dst.saturation = saturation;
    dst.lightness = lightness;
    return (dst);
}
