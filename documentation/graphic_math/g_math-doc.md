# Graphics Module Documentation

This documentation covers the core functionalities and data structures used for projection calculations, range mappings, and viewport transformations in a graphics programming context.

## Data Structures

### s_frange
Represents a floating-point range with specified minimum and maximum values:
- `min` - The minimum value of the floating-point range.
- `max` - The maximum value of the floating-point range.

### s_irange
Represents an integer range with specified minimum and maximum values:
- `min` - The minimum value of the integer range.
- `max` - The maximum value of the integer range.

## Functions

### Projection Matrices

- [ft_orthoproj_mat4](./ft_orthoproj_mat4.md)
  - Creates an orthographic projection matrix based on the field of view, near plane, far plane, and aspect ratio.

- [ft_persproj_mat4](./ft_persproj_mat4.md)
  - Creates a perspective projection matrix using the field of view, near plane, far plane, and aspect ratio.

### Utility Functions

- [ft_to_frange](./ft_to_frange.md)
  - Maps a float value from one range to another.

### Vertex Projection

- [ft_vertex3f_proj](./ft_vertex3f_proj.md)
  - Projects a 3D vertex onto a 2D plane using a transformation matrix.

### Viewport Transformations

- [ft_viewport_llc](./ft_viewport_llc.md)
  - Transforms normalized device coordinates (NDC) to a viewport's lower-left corner (LLC).

- [ft_viewport_tlc](./ft_viewport_tlc.md)
  - Converts normalized device coordinates (NDC) to a viewport's top-left corner (TLC).

## Notes

This module is critical for applications involving 3D rendering and transformations, providing the necessary tools to handle geometrical transformations and screen mappings effectively.

### Return to Main Documentation
[Home](../home.md)
