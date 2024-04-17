# ft_rgba_from_hsl
Converts a color from HSL (Hue, Saturation, Lightness) format to RGBA (Red, Green, Blue, Alpha) format. This function is particularly useful for applications that need to transition between color models for various effects or rendering techniques.

### Parameters
- `t_colorhsl hsl`: The HSL color to convert.

### Returns
- `t_colorrgba`: The RGBA representation of the given HSL color.

### Example Usage
```c
t_colorhsl hslColor = {270.0, 0.5, 0.5};  // A medium purple in HSL
t_colorrgba rgbaColor = ft_rgba_from_hsl(hslColor);
// rgbaColor will have red, green, blue values representing purple and default alpha
```

### Function Details
This function performs the color conversion using the HSL to RGB color conversion algorithm, which involves:
- **C (chroma)**: The base color intensity before adjusting for lightness.
- **X**: A secondary color value used to adjust the final RGB based on hue.
- **M**: A value added to each component to scale the color to the correct lightness.

Depending on the hue range, different formulas are applied to calculate the RGB components:
- **Hue < 60°**: Red is the primary color, green adjusts based on `X`, blue is zero.
- **60° <= Hue < 120°**: Green is the primary color, red adjusts, blue is zero.
- **120° <= Hue < 180°**: Green is the primary color, blue adjusts, red is zero.
- **180° <= Hue < 240°**: Blue is the primary color, green adjusts, red is zero.
- **240° <= Hue < 300°**: Blue is the primary color, red adjusts, green is zero.
- **300° <= Hue < 360°**: Red is the primary color, blue adjusts, green is zero.

Each RGB component is then adjusted by adding `M` and scaled to the 0-255 range for RGBA.

### Notes:
- **Color Precision**: Due to the conversion from floating-point operations in HSL to integer values in RGBA, minor discrepancies can occur.
- **Alpha Transparency**: The alpha value is not calculated in this function and should be set separately if needed.

## Related Documentation
- [t_colorrgba](./t_colorrgba.md)
- [t_colorhsl](../colorhsl/t_colorhsl.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[Home](../../home.md)
