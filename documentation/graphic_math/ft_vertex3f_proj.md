# ft_ver3f_proj
Projects a 3D vertex onto a 2D plane using a transformation matrix, and then maps it to screen coordinates based on specified viewport dimensions. This function is crucial for rendering 3D scenes onto a 2D display.

### Parameters
- `t_vertex3f v`: The 3D vertex to be projected. Contains the x, y, and z coordinates.
- `t_matrix4 m`: The transformation matrix used to apply rotation, scaling, and translation transformations to the vertex.
- `int width`: The width of the viewport in pixels.
- `int height`: The height of the viewport in pixels.

### Function Details
This function performs several steps to project a 3D vertex onto a 2D viewport:
1. **Quaternion Conversion**: Converts the vertex coordinates into a quaternion for easier manipulation.
2. **Matrix Multiplication**: Applies the transformation matrix to the vertex using quaternion multiplication.
3. **Normalization**: Converts the transformed quaternion back into a 3D vector and normalizes it to normalized device coordinates (NDC).
4. **Viewport Transformation**: Maps the NDC to viewport coordinates considering the top-left corner as the origin.

### Returns
- `t_vertex2i`: The projected 2D vertex coordinates in screen space.

### Example Usage
```c
t_vertex3f myVertex = {1.0f, 2.0f, 3.0f};
t_matrix4 myMatrix = get_transformation_matrix();
int screenWidth = 800, screenHeight = 600;
t_vertex2i screenVertex = ft_ver3f_proj(myVertex, myMatrix, screenWidth, screenHeight);
```

### Notes:
- **NDC to Screen Space**: The conversion from NDC to screen coordinates considers the top-left corner as the origin, which is typical for most graphics APIs.
- **Color Handling**: The original function has a commented line that might handle vertex color; ensure to adapt or implement color handling as needed for your application.

## Related Documentation
- [g_math-doc](./g_math-doc.md)
- [t_vertex3f](../vertex/vertex3f/t_vertex3f.md)
- [t_matrix4](../matrix/matrix4/t_matrix4.md)
- [t_vertex2i](../vertex/vertex2i/t_vertex2i.md)

### Return to the home page of the documentation
[home](../home.md)
