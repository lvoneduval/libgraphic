# t_colorhsl
Represents a color in the HSL (Hue, Saturation, Lightness) color model. 

- `float hue`: Hue value of the color, ranging from 0 to 360 degrees.
- `float saturation`: Saturation level of the color, expressed as a percentage from 0% (a shade of gray) to 100% (full color).
- `float lightness`: Lightness level of the color, expressed as a percentage from 0% (black) to 100% (white).

## Default HSL Values
This section details the default values used for initializing HSL colors in the Libgraphic project. These defaults provide a neutral baseline color setting that can be used for initial states or defaults in various graphic applications.

### Constants
- **DEFAULT_HUE_VALUE**: Represents the default hue value for HSL colors.
  - Value: `0.0` degrees (Red)
  - **Purpose**: Defines a neutral point on the color wheel, starting at red. 
- **DEFAULT_SATURATION_VALUE**: Represents the default saturation level for HSL colors.
  - Value: `0.0`% (A shade of gray)
  - **Purpose**: A saturation level of 0% results in no color saturation, effectively turning the color into a shade of gray regardless of the hue.
- **DEFAULT_LIGHTNESS_VALUE**: Represents the default lightness level for HSL colors.
  - Value: `50.0`% (Neutral brightness)
  - **Purpose**: A lightness of 50% is perfectly balanced between light and dark, providing a medium brightness level that is visually centered.


## Functions
- [ft_hsl_new](./ft_hsl_new.md)
- [ft_hsl_default](./ft_hsl_default.md)
- [ft_hsl_add](./ft_hsl_add.md)
- [ft_hsl_sub](./ft_hsl_sub.md)
- [ft_hsl_from_rgba](./ft_hsl_from_rgba.md)
- [ft_hsl_lerp](./ft_hsl_lerp.md)

## Related Documention
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[Home](../../home.md)
