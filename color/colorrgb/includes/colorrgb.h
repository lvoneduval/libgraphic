#ifndef COLORSRGB_H
# define COLORSRGB_H

# include <stdint.h>

# define DEFAULT_RED_VALUE 0xFF
# define DEFAULT_GREEN_VALUE 0xFF
# define DEFAULT_BLUE_VALUE 0xFF

typedef struct	s_colorrgb
{
	uint8_t		red;
	uint8_t		green;
	uint8_t		blue;
}				t_colorrgb;

t_colorrgb		ft_rgb_default(void);
t_colorrgb		ft_rgb_new(uint8_t red, uint8_t green, uint8_t blue);
t_colorrgb		ft_rgb_from_i(int color);
t_colorrgb	  ft_rgb_lerp(t_colorrgb a, t_colorrgb b, float i)
int	          ft_rgbtoi(t_colorrgb color);
#endif
