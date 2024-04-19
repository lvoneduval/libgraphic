# Vertex2i Documentation

This document provides detailed information about the `t_vertex2i` structure, which represents a 2D vertex using integer-point coordinates. It is commonly used in graphics programming and computational geometry for representing points or positions in a two-dimensional space.

## Structure Definition
### t_vertex2i
- `x` - int, the x-coordinate of the vertex.
- `y` - int, the y-coordinate of the vertex.

## Functions

### Constructors
- [ft_vertex2i_new](./ft_vertex2i_new.md) - Creates a new `t_vertex2i` vertex with specified x and y values.
- [ft_vertex2i_null](./ft_vertex2i_null.md) - Generates a `t_vertex2i` vertex with coordinates set to zero.

### Arithmetic Operations
- [ft_vertex2i_add](./ft_vertex2i_add.md) - Adds two `t_vertex2i` vertices.
- [ft_vertex2i_sub](./ft_vertex2i_sub.md) - Subtracts one `t_vertex2i` vertex from another.
- [ft_vertex2i_mul](./ft_vertex2i_mul.md) - Multiplies two `t_vertex2i` vertices.
- [ft_vertex2i_div](./ft_vertex2i_div.md) - Divides one `t_vertex2i` vertex by another.
- [ft_vertex2i_opp](./ft_vertex2i_opp.md) - Negates a `t_vertex2i`, reversing its direction.

### Notes:
- **Utility Functions**: These include functions for creating and manipulating `t_vertex2i` vertices. Each function is tailored to specific needs such as creating a zero vertex, adding or subtracting vertices, etc.
- **Performance**: Operations on `t_vertex2i` are designed to be fast and suitable for real-time applications.
- **Usage**: Typically used in applications involving 2D transformations, graphical computations, and as part of larger data structures in graphical applications.

## Related Documentation
- [t_vertex2i](./t_vertex2i.md) - For integer-based 2D vertex operations.
- [vertex-doc](../vertex-doc.md) - Main overview of vertex structures and their documentation.

### Return to the Home Page of the Documentation
[Home](../../home.md)
