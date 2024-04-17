# ft_rgba_from_i
Converts a 32-bit integer representation of a color into an RGBA color structure. This function is useful when dealing with color data that is stored or transmitted as compact integers, allowing for easy unpacking into usable color components including alpha transparency.

### Parameters
- `int color`: The integer color value to convert, formatted as 0xAARRGGBB.

### Returns
- `t_colorrgba`: The unpacked RGBA color.

### Example Usage
```c
int packedColor = 0xFF5733CC; // Example color with alpha
t_colorrgba rgbaColor = ft_rgba_from_i(packedColor);
// rgbaColor will have alpha = 0xFF, red = 0x57, green = 0x33, blue = 0xCC
```

### Function Details
This function extracts RGBA components from a single integer:
- **Blue Component**: Extracted by applying a mask of `0xFF`.
- **Green Component**: Shifted right by 8 bits and then masked with `0xFF`.
- **Red Component**: Shifted right by 16 bits and then masked with `0xFF`.
- **Alpha Component**: Shifted right by 24 bits and then masked with `0xFF`.

### Notes:
- **Color Encoding**: The input integer is assumed to be encoded as 0xAARRGGBB, where AA is the alpha transparency, RR is red, GG is green, and BB is blue.
- **Endianness Concerns**: The function assumes that the integer is formatted in little-endian byte order as typical for most computing systems. If operating in a big-endian system, byte order issues may need to be considered.
- **Alpha Transparency**: This function properly extracts the alpha value, which represents the opacity of the color where 0x00 is fully transparent and 0xFF is fully opaque.

## Related Documentation
- [t_colorrgba](./t_colorrgba.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[Home](../../home.md)
