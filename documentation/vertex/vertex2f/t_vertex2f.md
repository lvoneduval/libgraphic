# Vertex2f Documentation

This document provides detailed information about the `t_vertex2f` structure, which represents a 2D vertex using floating-point coordinates. It is commonly used in graphics programming and computational geometry for representing points or positions in a two-dimensional space.

## Structure Definition
### t_vertex2f
- `x` - float, the x-coordinate of the vertex.
- `y` - float, the y-coordinate of the vertex.

## Functions

### Constructors
- [ft_vertex2f_new](./ft_vertex2f_new.md) - Creates a new `t_vertex2f` vertex with specified x and y values.
- [ft_vertex2f_null](./ft_vertex2f_null.md) - Generates a `t_vertex2f` vertex with coordinates set to zero.

### Arithmetic Operations
- [ft_vertex2f_add](./ft_vertex2f_add.md) - Adds two `t_vertex2f` vertices.
- [ft_vertex2f_sub](./ft_vertex2f_sub.md) - Subtracts one `t_vertex2f` vertex from another.
- [ft_vertex2f_mul](./ft_vertex2f_mul.md) - Multiplies two `t_vertex2f` vertices.
- [ft_vertex2f_div](./ft_vertex2f_div.md) - Divides one `t_vertex2f` vertex by another.
- [ft_vertex2f_opp](./ft_vertex2f_opp.md) - Negates a `t_vertex2f`, reversing its direction.

### Notes:
- **Utility Functions**: These include functions for creating and manipulating `t_vertex2f` vertices. Each function is tailored to specific needs such as creating a zero vertex, adding or subtracting vertices, etc.
- **Performance**: Operations on `t_vertex2f` are designed to be fast and suitable for real-time applications.
- **Usage**: Typically used in applications involving 2D transformations, graphical computations, and as part of larger data structures in graphical applications.

## Related Documentation
- [t_vertex2f](./t_vertex2f.md) - For integer-based 2D vertex operations.
- [vertex-doc](../vertex-doc.md) - Main overview of vertex structures and their documentation.

### Return to the Home Page of the Documentation
[Home](../../home.md)
