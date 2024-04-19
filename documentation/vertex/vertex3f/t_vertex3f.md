# Vertex3f Documentation

This document provides detailed information about the `t_vertex3f` structure, which represents a 3D vertex using floating-point coordinates. It is commonly used in graphics programming and computational geometry for representing points or positions in a two-dimensional space.

## Structure Definition
### t_vertex3f
- `x` - float, the x-coordinate of the vertex.
- `y` - float, the y-coordinate of the vertex.
- `z` - float, the z-coordinate of the vertex.

## Functions

### Constructors
- [ft_vertex3f_new](./ft_vertex3f_new.md) - Creates a new `t_vertex3f` vertex with specified x and y values.
- [ft_vertex3f_null](./ft_vertex3f_null.md) - Generates a `t_vertex3f` vertex with coordinates set to zero.
- [ft_vertex3f_from_vertex3i](./ft_vertex3f_from_vertex3i.md) - Converts a `t_vertex3i` vertex (integer coordinates) into a `t_vertex3f` vertex (floating-point coordinates).

### Arithmetic Operations
- [ft_vertex3f_add](./ft_vertex3f_add.md) - Adds two `t_vertex3f` vertices.
- [ft_vertex3f_sub](./ft_vertex3f_sub.md) - Subtracts one `t_vertex3f` vertex from another.
- [ft_vertex3f_mul](./ft_vertex3f_mul.md) - Multiplies two `t_vertex3f` vertices.
- [ft_vertex3f_div](./ft_vertex3f_div.md) - Divides one `t_vertex3f` vertex by another.
- [ft_vertex3f_opp](./ft_vertex3f_opp.md) - Negates a `t_vertex3f`, reversing its direction.

### Notes:
- **Utility Functions**: These include functions for creating and manipulating `t_vertex3f` vertices. Each function is tailored to specific needs such as creating a zero vertex, adding or subtracting vertices, etc.
- **Performance**: Operations on `t_vertex3f` are designed to be fast and suitable for real-time applications.
- **Usage**: Typically used in applications involving 3D transformations, graphical computations, and as part of larger data structures in graphical applications.

## Related Documentation
- [t_vertex3f](./t_vertex3f.md) - For integer-based 3D vertex operations.
- [vertex-doc](../vertex-doc.md) - Main overview of vertex structures and their documentation.

### Return to the Home Page of the Documentation
[Home](../../home.md)
