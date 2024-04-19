# ft_vertex2i_sub
Subtracts the coordinates of one `t_vertex2i` vertex from another, element-wise.

### Parameters
- `t_vertex2i v1`: The vertex from which to subtract.
- `t_vertex2i v2`: The vertex to subtract.

### Function Details
This function performs an element-wise subtraction between two 2D vertices. It subtracts the `x` and `y` coordinates of `v2` from `v1`.

### Returns
- `t_vertex2i`: The resulting vertex after subtraction.

### Example Usage
```c
t_vertex2i v1 = {5, 8};
t_vertex2i v2 = {3, 3};
t_vertex2i result = ft_vertex2i_sub(v1, v2);
// result will be {2, 5}
```

### Notes:
This operation creates a new vertex as the result and does not modify the original vertices.

## Related Documentation
- [t_vertex2i](./t_vertex2i.md) - Details about the `t_vertex2i` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[Home](../../home.md)