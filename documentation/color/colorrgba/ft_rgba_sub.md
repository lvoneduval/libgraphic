# ft_rgba_sub
Subtracts one RGBA color from another, component-wise. This function is used to modify colors by decreasing their color and alpha values based on another color's values.

### Parameters
- `t_colorrgba color`: The base RGBA color from which values will be subtracted.
- `t_colorrgba sub`: The RGBA color values to subtract from the base color.

### Returns
- `t_colorrgba`: The resulting RGBA color after subtraction. Each component of the color is the difference between the corresponding components of the input colors.

### Example Usage
***c
t_colorrgba baseColor = {255, 200, 150, 255};  // Opaque pastel orange
t_colorrgba subtractColor = {100, 50, 50, 100}; // Semi-transparent reduction
t_colorrgba newColor = ft_rgba_sub(baseColor, subtractColor);
// newColor will have red = 155, green = 150, blue = 100, alpha = 155
***

### Function Details
This function calculates each component of the resulting RGBA color by:
- **Red Component**: The red value is the difference between the red values of `color` and `sub`.
- **Green Component**: The green value is the difference between the green values of `color` and `sub`.
- **Blue Component**: The blue value is the difference between the blue values of `color` and `sub`.
- **Alpha Component**: The alpha value is the difference between the alpha values of `color` and `sub`.

### Notes:
- **Clamping Values**: This implementation does not handle negative results or underflow. If the subtraction results in a negative value for any component, it may be necessary to clamp the result to 0 to ensure the color remains valid.
- **Use Cases**: Ideal for creating effects like shadows or depth by reducing brightness and transparency, or adjusting colors relative to their backgrounds.

## Related Documentation
- [t_colorrgba](./t_colorrgba.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[home](../home.md)
