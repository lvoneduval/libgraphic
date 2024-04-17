# ft_rgb_lerp
Performs linear interpolation between two RGB colors based on the specified interpolation factor. This method is commonly used in graphics to create smooth color gradients or transitions between colors.

### Parameters
- `t_colorrgb a`: The starting RGB color for the interpolation.
- `t_colorrgb b`: The ending RGB color for the interpolation.
- `float i`: The interpolation factor, ranging from 0.0 (fully at the starting color) to 1.0 (fully at the ending color).

### Returns
- `t_colorrgb`: The interpolated RGB color.

### Example Usage
```c
t_colorrgb startColor = {255, 0, 0};   // Red
t_colorrgb endColor = {0, 0, 255};     // Blue
float factor = 0.5;                    // Midway between start and end colors
t_colorrgb blendedColor = ft_rgb_lerp(startColor, endColor, factor);
// blendedColor will have red = 128, green = 0, blue = 128 (a shade of purple)
```

### Function Details
This function calculates each component of the resulting RGB color by:
- **Component Calculation**: For each color component (red, green, blue), the new value is determined by the formula `start + (end - start) * factor`. This computes a value that is proportionally between the start and end component values based on the interpolation factor `i`.

### Notes:
- **Color Accuracy**: The interpolation may introduce rounding errors, especially visible when dealing with very subtle gradients. This is due to casting the interpolated values back to integer types.
- **Use Cases**: Ideal for animations, gradient generation, and any graphics work requiring a blend between two colors.
- **Boundary Values**: Ensure the interpolation factor does not exceed the range of 0.0 to 1.0 to avoid unexpected color results.

## Related Documentation
- [t_colorrgb](./t_colorrgb.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[home](../../home.md)
