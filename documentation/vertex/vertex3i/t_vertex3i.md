# t_vertex3i Documentation

This document provides detailed information about the `t_vertex3i` structure, which represents a 3D vertex using integer-point coordinates. It is commonly used in graphics programming and computational geometry for representing points or positions in a two-dimensional space.

## Structure Definition
### t_vertex3i
- `x` - int, the x-coordinate of the vertex.
- `y` - int, the y-coordinate of the vertex.
- `z` - int, the z-coordinate of the vertex.

## Functions

### Constructors
- [ft_vertex3i_new](./ft_vertex3i_new.md) - Creates a new `t_vertex3i` vertex with specified x and y values.
- [ft_vertex3i_null](./ft_vertex3i_null.md) - Generates a `t_vertex3i` vertex with coordinates set to zero.

### Arithmetic Operations
- [ft_vertex3i_add](./ft_vertex3i_add.md) - Adds two `t_vertex3i` vertices.
- [ft_vertex3i_sub](./ft_vertex3i_sub.md) - Subtracts one `t_vertex3i` vertex from another.
- [ft_vertex3i_mul](./ft_vertex3i_mul.md) - Multiplies two `t_vertex3i` vertices.
- [ft_vertex3i_div](./ft_vertex3i_div.md) - Divides one `t_vertex3i` vertex by another.
- [ft_vertex3i_opp](./ft_vertex3i_opp.md) - Negates a `t_vertex3i`, reversing its direction.

### Notes:
- **Utility Functions**: These include functions for creating and manipulating `t_vertex3i` vertices. Each function is tailored to specific needs such as creating a zero vertex, adding or subtracting vertices, etc.
- **Performance**: Operations on `t_vertex3i` are designed to be fast and suitable for real-time applications.
- **Usage**: Typically used in applications involving 3D transformations, graphical computations, and as part of larger data structures in graphical applications.

## Related Documentation
- [t_vertex3i](./t_vertex3i.md) - For integer-based 3D vertex operations.
- [vertex-doc](../vertex-doc.md) - Main overview of vertex structures and their documentation.

### Return to the Home Page of the Documentation
[Home](../home.md)
