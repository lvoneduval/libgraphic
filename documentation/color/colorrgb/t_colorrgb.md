# t_colorrgb
Represents a color in the RGB color model without an alpha channel.

- `uint8_t red`: Red channel ranging from 0 to 255.
- `uint8_t green`: Green channel ranging from 0 to 255.
- `uint8_t blue`: Blue channel ranging from 0 to 255.

## Default RGB Values
This section outlines the default values for the RGB (Red, Green, Blue) color components used in the Libgraphic project. These values are used to initialize colors with a default setting, often used for clear or default color backgrounds in graphic applications.

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

## Functions

- [ft_rgb_new](./ft_rgb_new.md)
- [ft_rgb_default](./ft_rgb_default.md)
- [ft_rgb_to_i](./ft_rgb_to_i.md)
- [ft_rgb_from_i](./ft_rgb_from_i.md)
- [ft_rgb_lerp](./ft_rgb_lerp.md)

### Return to the home page of the documentation
[home](../home.md)