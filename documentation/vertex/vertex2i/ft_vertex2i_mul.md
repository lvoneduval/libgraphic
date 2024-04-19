# ft_vertex2i_mul
Performs element-wise multiplication of two `t_vertex2i` vertices.

### Parameters
- `t_vertex2i v1`: The first vertex.
- `t_vertex2i v2`: The second vertex.

### Function Details
This function multiplies the corresponding components (x and y) of two vertices and returns the result as a new `t_vertex2i` structure. It is useful for operations that require scaling a vertex by another vertex's components, commonly used in graphical transformations.

### Returns
- `t_vertex2i`: A new vertex resulting from the element-wise multiplication of the two given vertices.

### Example Usage
```c
t_vertex2i vertex1 = ft_vertex2i_new(2, 3);
t_vertex2i vertex2 = ft_vertex2i_new(4, 5);
t_vertex2i result = ft_vertex2i_mul(vertex1, vertex2);
// result.x will be 8 and result.y will be 15
```

### Notes:
Element-wise multiplication does not represent a dot product or a vector product; it simply multiplies corresponding components.

## Related Documentation
- [t_vertex2i](./t_vertex2i.md) - Details about the `t_vertex2i` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[Home](../../home.md)