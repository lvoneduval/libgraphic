# ft_rgb_to_i
Converts an RGB color structure to an integer representation. This function is useful for systems where colors need to be stored compactly in a single integer variable or passed to APIs expecting color data in integer format.

### Parameters
- `t_colorrgb color`: The RGB color to convert.

### Returns
- `int`: The integer representation of the RGB color, formatted as 0xRRGGBB.

### Example Usage
```c
t_colorrgb color = {255, 165, 0};  // Orange color
int packedColor = ft_rgb_to_i(color);
// packedColor will be 0xFFA500, which represents the orange color in hexadecimal.
```

### Function Details
This function combines the red, green, and blue components of an RGB color into a single integer:
- **Blue Component**: Placed in the least significant byte (`color.blue`).
- **Green Component**: Shifted left by 8 bits and placed in the next byte (`color.green << 8`).
- **Red Component**: Shifted left by 16 bits and placed in the next higher byte (`color.red << 16`).

### Notes:
- **Color Encoding**: The resulting integer is encoded as 0xRRGGBB, which is a common format for representing colors in many graphics libraries and systems.
- **Endianness Concerns**: The function assumes that the system uses little-endian byte order for multi-byte values. If used in a big-endian system, the byte order of the color components within the integer may need to be adjusted.

## Related Documentation
- [t_colorrgb](./t_colorrgb.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[home](../../home.md)
