#ifndef COLORHSL_H
# define COLORHSL_H

#define DEFAULT_HUE_VALUE 0.0
#define DEFAULT_SATURATION_VALUE 0.0
#define DEFAULT_LIGHTNESS_VALUE 50.0

#include <math.h>
#include "../../colorrgba/includes/colorrgba.h"

typedef struct s_colorhsl
{
    float hue;        // Teinte (0-360 degrés)
    float saturation; // Saturation (0-100, représentant un pourcentage)
    float lightness;  // Luminosité (0-100, représentant un pourcentage)
} t_colorhsl;

t_colorhsl ft_hsl_new(float hue, float saturation, float lightness);
t_colorhsl ft_hsl_default(void);
t_colorhsl ft_hsl_from_rgba(t_colorrgba rgba);

t_colorhsl ft_hsl_add(t_colorhsl color, t_colorhsl add);
t_colorhsl ft_hsl_sub(t_colorhsl color, t_colorhsl sub);
t_colorhsl ft_hsl_lerp(t_colorhsl a, t_colorhsl b, float i);

#endif
