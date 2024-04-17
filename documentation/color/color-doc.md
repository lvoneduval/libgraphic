# Color Structures

## Overview
This document describes the data structures used to represent different color formats in the Libgraphic project. These structures support various color models including RGBA, HSL, and RGB.

## Structures

### t_colorrgb
Represents a color in the RGB color model without an alpha channel.

- `uint8_t red`: Red channel ranging from 0 to 255.
- `uint8_t green`: Green channel ranging from 0 to 255.
- `uint8_t blue`: Blue channel ranging from 0 to 255.

[t_colorrgb](./colorrgb/t_colorrgb.md)

### t_colorrgba
Represents a color in the RGBA color model, where each color channel and alpha transparency is represented as an 8-bit integer.

- `uint8_t alpha`: Alpha channel (transparency) ranging from 0 (completely transparent) to 255 (completely opaque).
- `uint8_t red`: Red channel ranging from 0 to 255.
- `uint8_t green`: Green channel ranging from 0 to 255.
- `uint8_t blue`: Blue channel ranging from 0 to 255.

[t_colorrgba](./colorrgba/t_colorrgba.md)

### t_colorhsl
Represents a color in the HSL (Hue, Saturation, Lightness) color model. 

- `float hue`: Hue value of the color, ranging from 0 to 360 degrees.
- `float saturation`: Saturation level of the color, expressed as a percentage from 0% (a shade of gray) to 100% (full color).
- `float lightness`: Lightness level of the color, expressed as a percentage from 0% (black) to 100% (white).

[t_colorhsl](./colorhsl/t_colorhsl.md)

### Usage
These structures can be used to manage and manipulate color data in graphics programming. They provide a clear and accessible way to handle color operations in the Libgraphic project.

### Example Usage
```c
t_colorrgb colorRGB = {0, 0, 255}; // Pure blue
t_colorrgba colorRGBA = {255, 255, 0, 0}; // Opaque red
t_colorhsl colorHSL = {120.0f, 100.0f, 50.0f}; // Fully saturated mid-lightness green
```

## Functions

### HSL Color
- [ft_hsl_new](./colorhsl/ft_hsl_new.md)
- [ft_hsl_default](./colorhsl/ft_hsl_default.md)
- [ft_hsl_add](./colorhsl/ft_hsl_add.md)
- [ft_hsl_sub](./colorhsl/ft_hsl_sub.md)
- [ft_hsl_from_rgba](./colorhsl/ft_hsl_from_rgba.md)
- [ft_hsl_lerp](/colorhsl/ft_hsl_lerp.md)

### RGB Color
- [ft_rgb_new](./colorrgb/ft_rgb_new.md)
- [ft_rgb_default](./colorrgb/ft_rgb_default.md)
- [ft_rgb_to_i](./colorrgb/ft_rgb_to_i.md)
- [ft_rgb_from_i](./colorrgb/ft_rgb_from_i.md)
- [ft_rgb_lerp](./colorrgb/ft_rgb_lerp.md)

### RGBA Color
- [ft_rgba_new](./colorrgba/ft_rgba_new.md)
- [ft_rgba_default](./colorrgba/ft_rgba_default.md)
- [ft_rgba_add](./colorrgba/ft_rgba_add.md)
- [ft_rgba_sub](./colorrgba/ft_rgba_sub.md)
- [ft_rgba_from_hsl](./colorrgba/ft_rgba_from_hsl.md)
- [ft_rgba_from_i](./colorrgba/ft_rgba_from_i.md)
- [ft_rgba_lerp](/colorrgba/ft_rgba_lerp.md)
- [ft_rgba_to_i](/colorrgba/ft_rgba_to_i.md)
- [ft_icolor_lerp](/colorrgba/ft_icolor_lerp.md)

### Return to the home page of the documentation
[Home](../home.md)
