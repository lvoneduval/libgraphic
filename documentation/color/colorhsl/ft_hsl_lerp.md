# ft_hsl_lerp
Performs linear interpolation between two HSL colors based on the specified interpolation factor. This function is useful for creating smooth transitions between colors in animations or gradient effects.

### Parameters
- `t_colorhsl a`: The start HSL color for the interpolation.
- `t_colorhsl b`: The end HSL color for the interpolation.
- `float i`: The interpolation factor, ranging from 0.0 (fully at start color) to 1.0 (fully at end color).

### Returns
- `t_colorhsl`: The interpolated HSL color.

### Example Usage
```c
t_colorhsl startColor = {0.0, 100.0, 50.0}; // Fully saturated bright red
t_colorhsl endColor = {120.0, 100.0, 50.0}; // Fully saturated bright green
float factor = 0.5; // Midway between start and end colors
t_colorhsl middleColor = ft_hsl_lerp(startColor, endColor, factor);
// middleColor will be a blend of red and green, resulting in a bright yellow
```

### Function Details
This function computes each component of the resulting HSL color by:
- **Hue (H):** Interpolating between the hues of the start and end colors, taking the shortest path around the color wheel.
- **Saturation (S) and Lightness (L):** Linearly interpolating these values based on the interpolation factor.

### Notes:
- **Handling of Hue Interpolation:** Care should be taken when interpolating hues across the 0 and 360-degree boundary (e.g., from 350 to 10 degrees) to ensure the interpolation takes the shortest path around the color wheel. This basic implementation may not handle such cases, and additional logic might be needed to adjust the hue interpolation correctly.
- **Clamping Values:** Ensure that saturation and lightness values remain within their valid range (0-100%) post-interpolation.

## Related Documentation
- [t_colorhsl](./t_colorhsl.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[Home](../../home.md)
