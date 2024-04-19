# ft_vertex2f_opp
Computes the additive inverse (opposite) of a 2D floating-point vertex, negating both its x and y components.

### Parameters
- `t_vertex2f v`: The vertex for which to compute the opposite.

### Function Details
This function negates both the `x` and `y` coordinates of the given vertex, effectively reflecting it across the origin in the coordinate space.

### Returns
- `t_vertex2f`: A vertex with both coordinates negated relative to the input.

### Example Usage
***c
t_vertex2f v = {4.5, -3.2};
t_vertex2f result = ft_vertex2f_opp(v);
// result will be {-4.5, 3.2}
***

### Notes:
The operation does not modify the original vertex but returns a new one with the negated values.

## Related Documentation
- [t_vertex2f](./t_vertex2f.md) - Details about the `t_vertex2f` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[home](../../home.md)
