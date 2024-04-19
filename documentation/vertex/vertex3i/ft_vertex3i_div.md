# ft_vertex3i_div
Divides the coordinates of one `t_vertex3i` vertex by another, element-wise.

### Parameters
- `t_vertex3i v1`: The dividend vertex.
- `t_vertex3i v2`: The divisor vertex.

### Function Details
This function divides each component of v1 by the corresponding component of v2. It should be noted that this function does not handle division by zero, which should be checked before calling this function.

### Returns
- `t_vertex3i`: The resulting vertex after division.

### Example Usage
***c
t_vertex3i v1 = {10, 20 0};
t_vertex3i v2 = {5, 4, 1};
t_vertex3i result = ft_vertex3i_div(v1, v2);
// result will have x = 2, y = 5 and z = 0
***

### Notes:
This operation does not modify the input vertices but returns a new vertex. If any component of `v2` is zero, the result for that component will be undefined (or could cause a runtime error depending on the environment).

## Related Documentation
- [t_vertex3i](./t_vertex3i.md) - Details about the `t_vertex3i` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[home](../../home.md)