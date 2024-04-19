# ft_vertex2i_new
Creates a new `t_vertex2i` vertex initialized with specified x and y values.

### Parameters
- `int x`: The x-coordinate for the new vertex.
- `int y`: The y-coordinate for the new vertex.

### Function Details
This function constructs a new `t_vertex2i` struct, assigning the provided x and y values to the respective fields of the structure. It is typically used to create a vertex with specific coordinates.

### Returns
- `t_vertex2i`: A vertex initialized with the provided x and y coordinates.

### Example Usage
```c
t_vertex2i vertex = ft_vertex2i_new(5, 3);
// vertex.x will be 5 and vertex.y will be 3
```

### Notes:
The function is useful for setting up vertices for graphics processing or geometric calculations where explicit positioning is required.

## Related Documentation
- [t_vertex2i](./t_vertex2i.md) - Details about the `t_vertex2i` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[Home](../../home.md)