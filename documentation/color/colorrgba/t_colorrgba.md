# t_colorrgba
Represents a color in the RGBA color model, where each color channel and alpha transparency is represented as an 8-bit integer.

- `uint8_t alpha`: Alpha channel (transparency) ranging from 0 (completely transparent) to 255 (completely opaque).
- `uint8_t red`: Red channel ranging from 0 to 255.
- `uint8_t green`: Green channel ranging from 0 to 255.
- `uint8_t blue`: Blue channel ranging from 0 to 255.

## Default RGBA Values
This section outlines the default values for the RGBA (Red, Green, Blue, Alpha) color components used in the Libgraphic project. These values are used to initialize colors with a default setting, often used for clear or default color backgrounds in graphic applications.

### Constants
- **DEFAULT_RED_VALUE**: Default red component of an RGBA color.
  - Value: `0xFF` (255, full red)
  - **Purpose**: Sets the red component to its maximum, contributing to a default color of white when combined with maximum green and blue.
- **DEFAULT_GREEN_VALUE**: Default green component of an RGBA color.
  - Value: `0xFF` (255, full green)
  - **Purpose**: Sets the green component to its maximum, contributing to a default color of white when combined with maximum red and blue.
- **DEFAULT_BLUE_VALUE**: Default blue component of an RGBA color.
  - Value: `0xFF` (255, full blue)
  - **Purpose**: Sets the blue component to its maximum, contributing to a default color of white when combined with maximum red and green.
- **DEFAULT_ALPHA_VALUE**: Default alpha (transparency) component of an RGBA color.
  - Value: `0x0` (0, fully transparent)
  - **Purpose**: Sets the alpha component to fully transparent, making the color completely clear unless modified.

## Functions

- [ft_rgba_new](./ft_rgba_new.md)
- [ft_rgba_default](./ft_rgba_default.md)
- [ft_rgba_add](./ft_rgba_add.md)
- [ft_rgba_sub](./ft_rgba_sub.md)
- [ft_rgba_from_hsl](./ft_rgba_from_hsl.md)
- [ft_rgba_from_i](./ft_rgba_from_i.md)
- [ft_rgba_lerp](./ft_rgba_lerp.md)
- [ft_rgba_to_i](./ft_rgba_to_i.md)
- [ft_icolor_lerp](./ft_icolor_lerp.md)

## Related Documentation
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[Home](../../home.md)
