# ft_vertex3i_sub
Subtracts the coordinates of one `t_vertex3i` vertex from another, element-wise.

### Parameters
- `t_vertex3i v1`: The vertex from which to subtract.
- `t_vertex3i v2`: The vertex to subtract.

### Function Details
This function performs an element-wise subtraction between two 3D vertices. It subtracts the `x`, `y` and `z` coordinates of `v2` from `v1`.

### Returns
- `t_vertex3i`: The resulting vertex after subtraction.

### Example Usage
***c
t_vertex3i v1 = {5, 8, 2};
t_vertex3i v2 = {3, 3, 2};
t_vertex3i result = ft_vertex3i_sub(v1, v2);
// result will be {2, 5, 0}
***

### Notes:
This operation creates a new vertex as the result and does not modify the original vertices.

## Related Documentation
- [t_vertex3i](./t_vertex3i.md) - Details about the `t_vertex3i` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[Home](../../home.md)