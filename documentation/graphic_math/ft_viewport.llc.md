# ft_viewport_llc
Transforms normalized device coordinates (NDC) to viewport coordinates using the lower-left corner as the origin. This function is typically used in graphics programming to adjust 3D coordinates for display on a 2D screen.

### Parameters
- `t_vector3 ndc`: The normalized device coordinates, which range from -1 to 1.
- `t_vertex2i origin`: The origin of the viewport in pixel coordinates.
- `unsigned int width`: The width of the viewport in pixels.
- `unsigned int height`: The height of the viewport in pixels.

### Function Details
This function calculates the viewport coordinates by adjusting the NDC based on the viewport's dimensions and origin:
1. **X Coordinate Calculation**: Converts the x-coordinate from NDC to viewport space by scaling and translating it based on the viewport width and the x-coordinate of the origin.
2. **Y Coordinate Calculation**: Similarly, converts the y-coordinate from NDC to viewport space using the viewport height and the y-coordinate of the origin.

### Returns
- `t_vertex2i`: The converted viewport coordinates where the origin is at the lower-left corner (LLC).

### Example Usage
```c
t_vector3 ndc = {0.5, -0.5, 0.0};  // Sample NDC position
t_vertex2i origin = {0, 0};  // Viewport origin at lower-left corner
unsigned int width = 800;
unsigned int height = 600;
t_vertex2i viewportPos = ft_viewport_llc(ndc, origin, width, height);
// Expected output for viewportPos will be approximately {700, 150}
```

### Notes:
- **Coordinate System**: This function assumes a coordinate system where the lower-left corner is the origin, which aligns with common graphical standards.
- **Pixel Precision**: Because screen coordinates are integers, this function casts calculated floats to integers, which might involve rounding. Consider appropriate rounding strategies if sub-pixel accuracy is required.

## Related Documentation
- [g_math-doc](./g_math-doc.md)
- [t_vector3](../vector/vector3/t_vector3.md)
- [t_vertex2i](../vertex/vertex2i/t_vertex2i.md)

### Return to the home page of the documentation
[Home](../home.md)
