# ft_vertex3f_opp
Computes the additive inverse (opposite) of a 3D floating-point vertex, negating both its x and y components.

### Parameters
- `t_vertex3f v`: The vertex for which to compute the opposite.

### Function Details
This function negates both the `x`, `y` and `z` coordinates of the given vertex, effectively reflecting it across the origin in the coordinate space.

### Returns
- `t_vertex3f`: A vertex with both coordinates negated relative to the input.

### Example Usage
***c
t_vertex3f v = {4.5, -3.2, 0.0};
t_vertex3f result = ft_vertex3f_opp(v);
// result will be {-4.5, 3.2, 0.0}
***

### Notes:
The operation does not modify the original vertex but returns a new one with the negated values.

## Related Documentation
- [t_vertex3f](./t_vertex3f.md) - Details about the `t_vertex3f` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[Home](../../home.md)