#ifndef COLORSRGBA_H
# define COLORSRGBA_H

# include <stdint.h>

# define DEFAULT_RED_VALUE 0xFF
# define DEFAULT_GREEN_VALUE 0xFF
# define DEFAULT_BLUE_VALUE 0xFF
# define DEFAULT_ALPHA_VALUE 0x0

#include "../../colorhsl/includes/colorhsl.h"

typedef struct	s_colorrgba
{
	uint8_t		alpha;
	uint8_t		red;
	uint8_t		green;
	uint8_t		blue;
}				t_colorrgba;

int				ft_rgba_to_i(t_colorrgba color);
t_colorrgba	    ft_rgba_sub(t_colorrgba color, t_colorrgba sub);
t_colorrgba	    ft_rgba_new(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);
t_colorrgba	    ft_rgba_lerp(t_colorrgba a, t_colorrgba b, float i);
t_colorrgba	  	ft_rgba_from_i(int color);
t_colorrgba	    ft_rgba_default(void);
t_colorrgba	    ft_rgba_add(t_colorrgba color, t_colorrgba add);

t_colorrgba     ft_rgba_from_hsl(t_colorhsl hsl);
int				ft_icolor_lerp(int a, int b, float i);

#endif
