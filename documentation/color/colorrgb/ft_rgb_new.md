# ft_rgb_new
Creates a new RGB color structure with specified red, green, and blue values. This function initializes an RGB color, which is commonly used in graphics programming to represent color in digital displays.

### Parameters
- `uint8_t red`: The red component of the color, ranging from 0 (no red) to 255 (full red).
- `uint8_t green`: The green component of the color, ranging from 0 (no green) to 255 (full green).
- `uint8_t blue`: The blue component of the color, ranging from 0 (no blue) to 255 (full blue).

### Returns
- `t_colorrgb`: A new RGB color object initialized with the specified values.

### Example Usage
```c
t_colorrgb skyBlue = ft_rgb_new(135, 206, 235);
// Creates an RGB color for sky blue
```

### Function Details
This function constructs an RGB color by directly assigning the provided red, green, and blue values to the corresponding fields in the `t_colorrgb` structure. It's a straightforward utility for creating colors based on standard 8-bit per channel RGB values.

### Notes:
- **Color Range**: Each color component should be provided within the 0 to 255 range, corresponding to the intensity of the color in the RGB color space.

## Related Documentation
- [t_colorrgb](./t_colorrgb.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[home](../../home.md)