# ft_vertex3f_new
Creates a new `t_vertex3f` vertex initialized with specified x and y values.

### Parameters
- `float x`: The x-coordinate for the new vertex.
- `float y`: The y-coordinate for the new vertex.

### Function Details
This function constructs a new `t_vertex3f` struct, assigning the provided x and y values to the respective fields of the structure. It is typically used to create a vertex with specific coordinates.

### Returns
- `t_vertex3f`: A vertex initialized with the provided x and y coordinates.

### Example Usage
```c
t_vertex3f vertex = ft_vertex3f_new(5.0, 3.0, 4.0);
// vertex.x will be 5.0 and vertex.y will be 3.0 vertex.y will be 4.0
```

### Notes:
The function is useful for setting up vertices for graphics processing or geometric calculations where explicit positioning is required.

## Related Documentation
- [t_vertex3f](./t_vertex3f.md) - Details about the `t_vertex3f` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[Home](../../home.md)
