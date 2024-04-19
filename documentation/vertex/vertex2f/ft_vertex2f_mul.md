# ft_vertex2f_mul
Performs element-wise multiplication of two `t_vertex2f` vertices.

### Parameters
- `t_vertex2f v1`: The first vertex.
- `t_vertex2f v2`: The second vertex.

### Function Details
This function multiplies the corresponding components (x and y) of two vertices and returns the result as a new `t_vertex2f` structure. It is useful for operations that require scaling a vertex by another vertex's components, commonly used in graphical transformations.

### Returns
- `t_vertex2f`: A new vertex resulting from the element-wise multiplication of the two given vertices.

### Example Usage
***c
t_vertex2f vertex1 = ft_vertex2f_new(2.0, 3.0);
t_vertex2f vertex2 = ft_vertex2f_new(4.0, 5.0);
t_vertex2f result = ft_vertex2f_mul(vertex1, vertex2);
// result.x will be 8.0 and result.y will be 15.0
***

### Notes:
Element-wise multiplication does not represent a dot product or a vector product; it simply multiplies corresponding components.

## Related Documentation
- [t_vertex2f](./t_vertex2f.md) - Details about the `t_vertex2f` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[home](../../home.md)
