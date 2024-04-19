# ft_vertex3i_add
Adds two `t_vertex3i` vertices together and returns the result.

### Parameters
- `t_vertex3i v1`: The first vertex.
- `t_vertex3i v2`: The second vertex.

### Function Details
This function computes the addition of two 3D with integer coordinates by adding their respective `x`, `y` and `z` coordinates.

### Returns
- `t_vertex3i`: The resulting vertex after addition.

### Example Usage
```c
t_vertex3i v1 = {1, 2, 6};
t_vertex3i v2 = {3, 4, 7};
t_vertex3i result = ft_vertex3i_add(v1, v2);
// result will be {4, 6, 13}
```

### Notes:
This operation does not modify the input vertices but returns a new vertex that represents their sum.

## Related Documentation
- [t_vertex3i](./t_vertex3i.md) - Details about the `t_vertex3i` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[Home](../../home.md)