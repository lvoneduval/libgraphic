# ft_vertex3f_mul
Performs element-wise multiplication of two `t_vertex3f` vertices.

### Parameters
- `t_vertex3f v1`: The first vertex.
- `t_vertex3f v2`: The second vertex.

### Function Details
This function multiplies the corresponding components (x, y and z) of two vertices and returns the result as a new `t_vertex3f` structure. It is useful for operations that require scaling a vertex by another vertex's components, commonly used in graphical transformations.

### Returns
- `t_vertex3f`: A new vertex resulting from the element-wise multiplication of the two given vertices.

### Example Usage
***c
t_vertex3f vertex1 = ft_vertex3f_new(2.0, 3.0, 2.0);
t_vertex3f vertex2 = ft_vertex3f_new(4.0, 5.0, 2.0);
t_vertex3f result = ft_vertex3f_mul(vertex1, vertex2);
// result.x will be 8.0 and result.y will be 15.0 result.z will be 4.0
***

### Notes:
Element-wise multiplication does not represent a dot product or a vector product; it simply multiplies corresponding components.

## Related Documentation
- [t_vertex3f](./t_vertex3f.md) - Details about the `t_vertex3f` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[Home](../../home.md)