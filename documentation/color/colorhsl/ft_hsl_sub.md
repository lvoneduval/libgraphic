# ft_hsl_add
Adds the values of two HSL colors together, adjusting hue, saturation, and lightness by adding the corresponding values from two HSL color structures. This function is useful for blending colors by incrementally increasing their color properties.

### Parameters
- `t_colorhsl color`: The base HSL color to which the values will be added.
- `t_colorhsl add`: The HSL color values to add to the base color.

### Returns
- `t_colorhsl`: The result of the addition, producing a new HSL color with each component (hue, saturation, lightness) being the sum of the corresponding components of the input colors.

### Example Usage
```c
t_colorhsl baseColor = {180.0, 50.0, 50.0}; // A medium blue
t_colorhsl addColor = {20.0, 10.0, 10.0};   // A slight adjustment towards red
t_colorhsl newColor = ft_hsl_add(baseColor, addColor);
// newColor will have a hue of 200.0, saturation of 60.0, and lightness of 60.0
```

### Notes:
- **Hue Overflow:** The function does not handle overflow of the hue value, which should nominally be within the range [0, 360). If hue addition exceeds this range, you might want to apply a modulus operation (`newColor.hue = fmod(newColor.hue, 360);`) to keep it within bounds.
- **Saturation and Lightness Clamping:** Similarly, saturation and lightness are expected to stay within the range [0%, 100%]. This function does not clamp values; hence, values exceeding 100% or dropping below 0% due to addition need to be manually clamped if necessary to maintain valid color properties.

## Related Documentation
- [t_colorhsl](./t_colorhsl.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[home](../home.md)
