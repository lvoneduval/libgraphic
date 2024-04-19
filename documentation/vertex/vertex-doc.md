# Vertex Documentation Overview

This document serves as the main reference for the vertex structures used across various applications and algorithms in graphics and computational geometry. Vertex structures store coordinate data and are essential for defining shapes, positions, and transformations in both two-dimensional (2D) and three-dimensional (3D) spaces.

## Structures

### t_vertex2f
Represents a 2D vertex using floating-point coordinates.
- `x` - The x-coordinate in floating-point.
- `y` - The y-coordinate in floating-point.
[t_vertex2f-doc](./vertex2f/t_vertex2f.md) - Detailed documentation on operations and utilities.

### t_vertex2i
Represents a 2D vertex using integer coordinates.
- `x` - The x-coordinate as an integer.
- `y` - The y-coordinate as an integer.
[t_vertex2i](./vertex2i/t_vertex2i.md) - Detailed documentation on operations and utilities.

### t_vertex3f
Represents a 3D vertex with floating-point coordinates.
- `x` - The x-coordinate in floating-point.
- `y` - The y-coordinate in floating-point.
- `z` - The z-coordinate in floating-point.
[t_vertex3f](./vertex3f/t_vertex3f.md) - Detailed documentation on operations and utilities.

### t_vertex3i
Represents a 3D vertex with integer coordinates.
- `x` - The x-coordinate as an integer.
- `y` - The y-coordinate as an integer.
- `z` - The z-coordinate as an integer.
[t_vertex3i](./vertex3i/t_vertex3i.md) - Detailed documentation on operations and utilities.

### Notes:
- **Precision and Performance**: Structures using floating-point numbers (`t_vertex2f`, `t_vertex3f`) are typically used in applications where precision is critical, such as in rendering or physics calculations. Integer structures (`t_vertex2i`, `t_vertex3i`) are used where discrete values are necessary, such as in pixel coordinates in images.
- **Data Size**: Floating-point vertices consume more memory compared to integer vertices but provide a broader range and finer granularity.

### Return to the Home Page of the Documentation
[Home](../home.md)
