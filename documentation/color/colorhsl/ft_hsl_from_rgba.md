## ft_hsl_from_rgba
Converts an RGBA color to an HSL color. This function is useful for color manipulations and transitions in different color spaces, providing a way to work with color based on perceptual relevance rather than direct light intensity.

#### Parameters
- `t_colorrgba rgba`: The RGBA color that will be converted to HSL.

#### Returns
- `t_colorhsl`: The HSL representation of the input RGBA color.

#### Example Usage
```c
t_colorrgba rgbaColor = {255, 0, 0, 255}; // Opaque red
t_colorhsl hslColor = ft_hsl_from_rgba(rgbaColor);
// hslColor will represent the hue (0 degrees), saturation (100%), and lightness (50%) of red
```

### Function Details
This function computes the HSL values based on the following formulae:
- **Hue (H):** Calculated based on the RGB component that is the greatest. This component decides the initial color, with adjustments made based on other components.
- **Saturation (S):** This is the vibrancy of the color. For a given lightness level, saturation is at maximum when colors are either light or dark, and it's lower when they are intermediate.
- **Lightness (L):** This is calculated as the average of the most intense and least intense colors. It represents the variation from black (0%) through the primary color to white (100%).

### Notes:
- **Handling of Zero Delta:** When all RGB values are the same, the hue and saturation are set to zero, as the color is a shade of gray (the hue is undefined in this case).
- **Hue Adjustments:** Hue is adjusted into the range [0, 360) by multiplying the raw hue value by 60 and making corrections based on the relationships between the RGB components.
- **Edge Cases for Saturation Calculation:** If lightness is exactly 0.5 (or 50%), saturation calculation adjusts to avoid division by zero errors and to handle perfectly balanced light and dark components correctly.

## Related Documentation
- [t_colorhsl](./t_colorhsl.md)
- [t_colorrgba](../colorrgba/t_colorrgba.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[home](../../home.md)
