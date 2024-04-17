# ft_rgba_add
Performs component-wise addition of two RGBA colors. This function is useful for blending colors where each channel is added to the corresponding channel of another color, including the alpha transparency channel.

### Parameters
- `t_colorrgba color`: The base RGBA color to which the values will be added.
- `t_colorrgba add`: The RGBA color values to add to the base color.

### Returns
- `t_colorrgba`: The resulting RGBA color after addition. Each component of the color is the sum of the corresponding components of the input colors.

### Example Usage
```c
t_colorrgba baseColor = {100, 100, 100, 128};  // A semi-transparent gray
t_colorrgba addColor = {155, 155, 155, 127};   // Another semi-transparent color to add
t_colorrgba newColor = ft_rgba_add(baseColor, addColor);
// newColor will have red = 255, green = 255, blue = 255, alpha = 255 (saturated white with full opacity)
```

### Function Details
This function calculates each component of the resulting RGBA color by:
- **Red Component**: The red value is the sum of the red values of `color` and `add`.
- **Green Component**: The green value is the sum of the green values of `color` and `add`.
- **Blue Component**: The blue value is the sum of the blue values of `color` and `add`.
- **Alpha Component**: The alpha value is the sum of the alpha values of `color` and `add`.

### Notes:
- **Clamping Values**: This implementation does not handle clamping or overflow. If the sum exceeds the maximum value of 255 for any component, it may result in wrapping or need to be clamped in a production environment to ensure color values remain valid.
- **Color Accuracy**: Overflows can lead to unexpected color results; consider applying a clamping mechanism to ensure that channel values do not exceed the valid range of 0 to 255.

## Related Documentation
- [t_colorrgba](./t_colorrgba.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[home](../home.md)
