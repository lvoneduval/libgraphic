# ft_vertex2i_add
Adds two `t_vertex2i` vertices together and returns the result.

### Parameters
- `t_vertex2i v1`: The first vertex.
- `t_vertex2i v2`: The second vertex.

### Function Details
This function computes the addition of two 2D with integer coordinates by adding their respective `x` and `y` coordinates.

### Returns
- `t_vertex2i`: The resulting vertex after addition.

### Example Usage
```c
t_vertex2i v1 = {1, 2};
t_vertex2i v2 = {3, 4};
t_vertex2i result = ft_vertex2i_add(v1, v2);
// result will be {4, 6}
```

### Notes:
This operation does not modify the input vertices but returns a new vertex that represents their sum.

## Related Documentation
- [t_vertex2i](./t_vertex2i.md) - Details about the `t_vertex2i` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[Home](../../home.md)