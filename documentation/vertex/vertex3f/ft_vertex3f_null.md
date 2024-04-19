# ft_vertex3f_null
Creates a 3D floating-point vertex initialized to zero, representing the origin in 3D coordinate space.

### Parameters
None

### Function Details
This function initializes a vertex with both x and y values set to 0.0, which represents the origin in a 3D coordinate system.

### Returns
- `t_vertex3f`: A vertex with coordinates (0.0, 0.0, 0.0).

### Example Usage
```c
t_vertex3f origin = ft_vertex3f_null();
// origin.x will be 0.0 and origin.y will be 0.0 origin.z will be 0.0
```

### Notes:
This is often used to initialize vertices or as a default value when a vertex is needed but no specific position is yet assigned.

## Related Documentation
- [t_vertex3f](./t_vertex3f.md) - Details about the `t_vertex3f` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[Home](../../home.md)