# ft_vertex3f_add
Adds two `t_vertex3f` vertices together and returns the result.

### Parameters
- `t_vertex3f v1`: The first vertex.
- `t_vertex3f v2`: The second vertex.

### Function Details
This function computes the addition of two 3D floating-point vertices by adding their respective `x`, `y` and `z` coordinates.

### Returns
- `t_vertex3f`: The resulting vertex after addition.

### Example Usage
***c
t_vertex3f v1 = {1.0, 2.0, 5.0};
t_vertex3f v2 = {3.0, 4.0, 6.0};
t_vertex3f result = ft_vertex3f_add(v1, v2);
// result will be {4.0, 6.0, 11.0}
***

### Notes:
This operation does not modify the input vertices but returns a new vertex that represents their sum.

## Related Documentation
- [t_vertex3f](./t_vertex3f.md) - Details about the `t_vertex3f` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[home](../../home.md)