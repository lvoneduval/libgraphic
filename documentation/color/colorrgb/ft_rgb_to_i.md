# ft_rgb_from_i
Converts an integer to an RGB color structure. This function interprets the integer as a packed RGB format, where the lowest 8 bits represent the blue component, the next 8 bits represent the green component, and the third set of 8 bits from the least significant represent the red component.

### Parameters
- `int color`: The integer value encoding the RGB color, typically formatted as 0xRRGGBB.

### Returns
- `t_colorrgb`: An RGB color structure with the red, green, and blue components extracted from the integer.

### Example Usage
```c
int packedColor = 0xFF5733; // An example color packed in hexadecimal format
t_colorrgb rgbColor = ft_rgb_from_i(packedColor);
// rgbColor will have red = 0xFF, green = 0x57, blue = 0x33
```

### Function Details
This function breaks down the integer color representation:
- **Blue Component**: Extracted by masking the least significant byte (`color & 0xFF`).
- **Green Component**: Extracted by shifting the color right by 8 bits and then masking (`(color >> 8) & 0xFF`).
- **Red Component**: Extracted by shifting the color right by 16 bits and then masking (`(color >> 16) & 0xFF`).

### Notes:
- **Input Color Format**: Ensure that the input integer is in the correct color format (0xRRGGBB) to avoid incorrect color values.
- **Endianness**: This function assumes the color is stored in little-endian format, typical in many computing environments. If working in a different endianness, adjustments might be needed.

## Related Documentation
- [t_colorhsl](./t_colorrgb.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[home](../home.md)