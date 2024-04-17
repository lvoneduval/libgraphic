# ft_rgba_to_i
Converts an RGBA color structure to a 32-bit integer representation. This function is particularly useful for systems and APIs that require colors to be specified as compact integers, including alpha transparency.

### Parameters
- `t_colorrgba color`: The RGBA color to convert.

### Returns
- `int`: The integer representation of the RGBA color, formatted as 0xAARRGGBB.

### Example Usage
```c
t_colorrgba color = {255, 165, 0, 128};  // Orange color with 50% opacity
int packedColor = ft_rgba_to_i(color);
// packedColor will be 0x80FFA500, representing the orange color with semi-transparency in hexadecimal.
```

### Function Details
This function combines the red, green, blue, and alpha components of an RGBA color into a single integer:
- **Blue Component**: Placed in the least significant byte (`color.blue`).
- **Green Component**: Shifted left by 8 bits and placed in the next byte (`color.green << 8`).
- **Red Component**: Shifted left by 16 bits and placed in the next higher byte (`color.red << 16`).
- **Alpha Component**: Shifted left by 24 bits and placed in the highest byte (`color.alpha << 24`).

### Notes:
- **Color Encoding**: The resulting integer is encoded as 0xAARRGGBB, which includes the alpha transparency channel. This format is common for representing colors with transparency in many graphics libraries and systems.
- **Endianness Concerns**: The function assumes that the system uses little-endian byte order for multi-byte values. If used in a big-endian system, the byte order of the color components within the integer may need to be adjusted.
- **Alpha Channel**: The alpha channel typically represents transparency, with 0 being fully transparent and 255 being fully opaque.

## Related Documentation
- [t_colorrgba](./t_colorrgba.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[Home](../../home.md)
