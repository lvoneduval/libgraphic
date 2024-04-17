# ft_hsl_new
Creates a new HSL color structure with specified hue, saturation, and lightness values.

### Parameters
- `float hue`: Hue value of the color, ranging from 0 to 360 degrees.
- `float saturation`: Saturation level of the color, expressed as a percentage from 0% (a shade of gray) to 100% (full color).
- `float lightness`: Lightness level of the color, expressed as a percentage from 0% (black) to 100% (white).

#### Returns
- `t_colorhsl`: A new HSL color object initialized with the specified values.

### Example Usage
```c
t_colorhsl color = ft_hsl_new(270.0, 50.0, 30.0);
// This creates an HSL color with a hue of 270 degrees, 50% saturation, and 30% lightness.
```
## Related Documentation
- [t_colorhsl](./t_colorhsl.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[home](../../home.md)
