# ft_vertex3f_from_vertex3i
Converts a `t_vertex3i` vertex (integer coordinates) to a `t_vertex3f` vertex (floating-point coordinates).

### Parameters
- `t_vertex3i v`: The vertex with integer coordinates to be converted.

### Function Details
This function converts each component of the `t_vertex3i` structure (integer values for x, y, and z) into floating-point values and constructs a new `t_vertex3f` vertex. This conversion is often used when floating-point precision is required for computations or graphical transformations.

### Returns
- `t_vertex3f`: A new vertex with floating-point coordinates corresponding to the input integer coordinates.

### Example Usage
```c
t_vertex3i intVertex = {1, 2, 3};
t_vertex3f floatVertex = ft_vertex3f_from_vertex3i(intVertex);
// floatVertex will have coordinates (1.0, 2.0, 3.0)
```

### Notes:
The conversion assumes a direct casting from `int` to `float`, which maintains the numerical value but changes the data type to accommodate fractional components if required later.

## Related Documentation
- [t_vertex3i](../vertex3i/t_vertex3i.md) - Details the `t_vertex3i` structure, representing a 3D vertex with integer coordinates.
- [t_vertex3f](./t_vertex3f.md) - Provides details on the 3D floating-point vertex structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex structures.

### Return to the home page of the documentation
[Home](../../home.md)
