# ft_hsl_add
Adds the values of two HSL colors together component-wise. This function adjusts hue, saturation, and lightness by adding the corresponding values from two HSL color structures.

### Parameters
- `t_colorhsl color`: The base HSL color.
- `t_colorhsl add`: The HSL color to add to the base.

### Returns
- `t_colorhsl`: The result of the addition, producing a new HSL color with each component (hue, saturation, lightness) being the sum of the corresponding components of the input colors.

### Example Usage
```c
t_colorhsl baseColor = {180.0, 50.0, 50.0}; // A medium blue
t_colorhsl addColor = {20.0, 10.0, 10.0};   // A slight adjustment towards red
t_colorhsl newColor = ft_hsl_add(baseColor, addColor);
// newColor will have hue of 200.0, saturation of 60.0, and lightness of 60.0
```
## Related Documentation
- [t_colorhsl](./t_colorhsl.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[home](../../home.md)
