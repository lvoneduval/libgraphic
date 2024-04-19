# ft_vertex2i_null
Creates a 2D vertex initialized to zero, representing the origin in 2D coordinate space.

### Parameters
None

### Function Details
This function initializes a vertex with both x and y values set to 0, which represents the origin in a 2D coordinate system.

### Returns
- `t_vertex2i`: A vertex with coordinates (0, 0).

### Example Usage
***c
t_vertex2i origin = ft_vertex2i_null();
// origin.x will be 0 and origin.y will be 0
***

### Notes:
This is often used to initialize vertices or as a default value when a vertex is needed but no specific position is yet assigned.

## Related Documentation
- [t_vertex2i](./t_vertex2i.md) - Details about the `t_vertex2i` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[Home](../../home.md)