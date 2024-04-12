#ifndef COLORSTRUC_H
#define COLORSTRUC_H

#include <stdint.h>

typedef struct	s_colorrgba
{
	uint8_t		alpha;
	uint8_t		red;
	uint8_t		green;
	uint8_t		blue;
}				t_colorrgba;

typedef struct s_colorhsl
{
    float hue;        // Teinte (0-360 degrés)
    float saturation; // Saturation (0-100, représentant un pourcentage)
    float lightness;  // Luminosité (0-100, représentant un pourcentage)
} t_colorhsl;

typedef struct	s_colorrgb
{
	uint8_t		red;
	uint8_t		green;
	uint8_t		blue;
}				t_colorrgb;

#endif
