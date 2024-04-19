# ft_vertex3i_opp
Computes the additive inverse (opposite) of a 3D vertex, negating both its x and y components.

### Parameters
- `t_vertex3i v`: The vertex for which to compute the opposite.

### Function Details
This function negates both the `x`, `y` `z` coordinates of the given vertex, effectively reflecting it across the origin in the coordinate space.

### Returns
- `t_vertex3i`: A vertex with both coordinates negated relative to the input.

### Example Usage
***c
t_vertex3i v = {-4, 3, 0};
t_vertex3i result = ft_vertex3i_opp(v);
// result will be {4, -3, 0}
***

### Notes:
The operation does not modify the original vertex but returns a new one with the negated values.

## Related Documentation
- [t_vertex3i](./t_vertex3i.md) - Details about the `t_vertex3i` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[Home](../../home.md)