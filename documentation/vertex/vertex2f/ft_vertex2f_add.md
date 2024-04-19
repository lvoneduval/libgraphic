# ft_vertex2f_add
Adds two `t_vertex2f` vertices together and returns the result.

### Parameters
- `t_vertex2f v1`: The first vertex.
- `t_vertex2f v2`: The second vertex.

### Function Details
This function computes the addition of two 2D floating-point vertices by adding their respective `x` and `y` coordinates.

### Returns
- `t_vertex2f`: The resulting vertex after addition.

### Example Usage
```c
t_vertex2f v1 = {1.0, 2.0};
t_vertex2f v2 = {3.0, 4.0};
t_vertex2f result = ft_vertex2f_add(v1, v2);
// result will be {4.0, 6.0}
```

### Notes:
This operation does not modify the input vertices but returns a new vertex that represents their sum.

## Related Documentation
- [t_vertex2f](./t_vertex2f.md) - Details about the `t_vertex2f` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[Home](../../home.md)
