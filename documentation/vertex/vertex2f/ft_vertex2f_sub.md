# ft_vertex2f_sub
Subtracts the coordinates of one `t_vertex2f` vertex from another, element-wise.

### Parameters
- `t_vertex2f v1`: The vertex from which to subtract.
- `t_vertex2f v2`: The vertex to subtract.

### Function Details
This function performs an element-wise subtraction between two 2D floating-point vertices. It subtracts the `x` and `y` coordinates of `v2` from `v1`.

### Returns
- `t_vertex2f`: The resulting vertex after subtraction.

### Example Usage
***c
t_vertex2f v1 = {5.0, 8.0};
t_vertex2f v2 = {3.0, 3.0};
t_vertex2f result = ft_vertex2f_sub(v1, v2);
// result will be {2.0, 5.0}
***

### Notes:
This operation creates a new vertex as the result and does not modify the original vertices.

## Related Documentation
- [t_vertex2f](./t_vertex2f.md) - Details about the `t_vertex2f` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[Home](../../home.md)
