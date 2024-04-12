#ifndef COLORHSL_H
# define COLORHSL_H

#define DEFAULT_HUE_VALUE 0.0
#define DEFAULT_SATURATION_VALUE 0.0
#define DEFAULT_LIGHTNESS_VALUE 50.0

#include <math.h>
#include "../../includes/colorstruct.h"

t_colorhsl ft_hsl_new(float hue, float saturation, float lightness);
t_colorhsl ft_hsl_default(void);
t_colorhsl ft_hsl_from_rgba(t_colorrgba rgba);

t_colorhsl ft_hsl_add(t_colorhsl color, t_colorhsl add);
t_colorhsl ft_hsl_sub(t_colorhsl color, t_colorhsl sub);
t_colorhsl ft_hsl_lerp(t_colorhsl a, t_colorhsl b, float i);

#endif
