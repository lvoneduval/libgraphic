# ft_icolor_lerp
Performs linear interpolation between two colors represented as integers. This function is commonly used in graphics to create smooth transitions between colors, particularly useful in animations and gradient effects.

### Parameters
- `int a`: The starting color, represented as an integer in the format 0xAARRGGBB.
- `int b`: The ending color, also in the format 0xAARRGGBB.
- `float i`: The interpolation factor, ranging from 0.0 (fully at color `a`) to 1.0 (fully at color `b`).

### Returns
- `int`: The interpolated color, represented as an integer in the format 0xAARRGGBB.

### Example Usage
```c
int startColor = 0xFF0000FF; // Full blue
int endColor = 0xFFFF0000; // Full red
float factor = 0.5;
int blendedColor = ft_icolor_lerp(startColor, endColor, factor);
// blendedColor will be 0xFF800080, a purple halfway between blue and red
```

### Function Details
This function calculates the interpolated color by blending the RGBA channels individually:
- **Alpha (A)**, **Red (R)**, **Green (G)**, and **Blue (B)** components are linearly interpolated based on the input factor `i`.
- Each color component is masked, shifted, interpolated, and then reassembled into a final RGBA integer.

### Notes:
- **Precision**: Floating-point operations may introduce rounding errors; consider rounding results if exact color values are critical.
- **Performance**: This function involves multiple bitwise operations and could be optimized with SIMD instructions if performance is a concern in critical paths.

## Related Documentation
- [t_colorrgba](./t_colorrgba.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[Home](../../home.md)
