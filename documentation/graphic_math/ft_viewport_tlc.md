# ft_viewport_tlc
Transforms normalized device coordinates (NDC) to viewport coordinates with the top-left corner (TLC) as the origin. This function is widely used in graphics programming where the graphical origin is at the top-left of the screen or rendering surface.

### Parameters
- `t_vector3 ndc`: The normalized device coordinates, where each component ranges from -1 to 1.
- `t_vertex2i origin`: The origin of the viewport in pixel coordinates, typically the top-left corner.
- `unsigned int width`: The width of the viewport in pixels.
- `unsigned int height`: The height of the viewport in pixels.

### Function Details
This function modifies the NDC to fit within the viewport dimensions starting from the top-left origin:
1. **X Coordinate Calculation**: Converts the x-coordinate from NDC to viewport space by scaling it based on the viewport width and translating it by the x-coordinate of the origin.
2. **Y Coordinate Calculation**: Converts the y-coordinate from NDC to viewport space by scaling it based on the viewport height, inverting it to match the top-down screen coordinate system, and translating it by the y-coordinate of the origin.

### Returns
- `t_vertex2i`: The viewport coordinates where the origin is at the top-left corner (TLC).

### Example Usage
```c
t_vector3 ndc = {0.5, 0.5, 0.0};  // Sample NDC position
t_vertex2i origin = {0, 0};  // Viewport origin at top-left corner
unsigned int width = 800;
unsigned int height = 600;
t_vertex2i viewportPos = ft_viewport_tlc(ndc, origin, width, height);
// Expected output for viewportPos will be approximately {700, 150}
```

### Notes:
- **Coordinate System Assumptions**: This function assumes a coordinate system where the top-left corner is the origin, common in most graphic user interfaces and window systems.
- **Pixel Precision**: The function converts floating-point calculations to integers. Care should be taken when precision is critical, as integer casting involves rounding.

## Related Documentation
- [g_math-doc](./g_math-doc.md)
- [t_vector3](../vector/vector3/t_vector3.md)
- [t_vertex2i](../vertex/vertex2i/t_vertex2i.md)

### Return to the home page of the documentation
[Home](../home.md)
