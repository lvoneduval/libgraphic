# ft_rgba_new
Creates a new RGBA color structure with specified red, green, blue, and alpha values. This function is essential for initializing colors with transparency in graphics programming.

### Parameters
- `uint8_t red`: The red component of the color, ranging from 0 (no red) to 255 (full red).
- `uint8_t green`: The green component of the color, ranging from 0 (no green) to 255 (full green).
- `uint8_t blue`: The blue component of the color, ranging from 0 (no blue) to 255 (full blue).
- `uint8_t alpha`: The alpha (transparency) component of the color, ranging from 0 (completely transparent) to 255 (completely opaque).

### Returns
- `t_colorrgba`: A new RGBA color object initialized with the specified values.

### Example Usage
***c
t_colorrgba solidRed = ft_rgba_new(255, 0, 0, 255);  // Opaque red
t_colorrgba transparentBlue = ft_rgba_new(0, 0, 255, 128);  // Semi-transparent blue
***

### Function Details
This function initializes an RGBA color by assigning the given values to the respective fields in the `t_colorrgba` structure:
- **Red Component**: Assigned to the `red` field.
- **Green Component**: Assigned to the `green` field.
- **Blue Component**: Assigned to the `blue` field.
- **Alpha Component**: Assigned to the `alpha` field.

### Notes:
- **Color Initialization**: Useful for explicitly setting colors in user interfaces, animations, or any graphical content where precise control over color and transparency is required.
- **Flexibility**: Allows easy adjustments and creation of colors, supporting both solid and transparent variations.

## Related Documentation
- [t_colorrgba](./t_colorrgba.md)
- [color-doc](../color-doc.md)

### Return to the home page of the documentation
[home](../../home.md)
