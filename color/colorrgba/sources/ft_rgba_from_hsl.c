#include "../includes/colorrgba.h"

t_colorrgba ft_rgba_from_hsl(t_colorhsl hsl)
{
    t_colorrgba rgba;
    float c;
    float x;
    float m;
    float r;
    float g;
    float b;
    
    c = (1.0f - fabsf(2.0f * hsl.lightness - 1.0f)) * hsl.saturation;
    x = c * (1.0f - fabsf(fmodf(hsl.hue / 60.0f, 2.0f) - 1.0f));
    m = hsl.lightness - c / 2.0f;
    if (hsl.hue < 60.0f)
        r = c; g = x; b = 0;
    else if (hsl.hue < 120.0f)
        r = x; g = c; b = 0;
    else if (hsl.hue < 180.0f)
        r = 0; g = c; b = x;
    else if (hsl.hue < 240.0f)
        r = 0; g = x; b = c;
    else if (hsl.hue < 300.0f)
        r = x; g = 0; b = c;
    else
        r = c; g = 0; b = x;
    rgba.red = (uint8_t)((r + m) * 255.0f);
    rgba.green = (uint8_t)((g + m) * 255.0f);
    rgba.blue = (uint8_t)((b + m) * 255.0f);
    rgba.alpha = rgba.alpha; // Alpha channel remains unchanged
    return (rgba);
}
