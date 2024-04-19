# ft_vertex2i_opp
Computes the additive inverse (opposite) of a 2D vertex, negating both its x and y components.

### Parameters
- `t_vertex2i v`: The vertex for which to compute the opposite.

### Function Details
This function negates both the `x` and `y` coordinates of the given vertex, effectively reflecting it across the origin in the coordinate space.

### Returns
- `t_vertex2i`: A vertex with both coordinates negated relative to the input.

### Example Usage
```c
t_vertex2i v = {-4, 3};
t_vertex2i result = ft_vertex2i_opp(v);
// result will be {4, -3}
```

### Notes:
The operation does not modify the original vertex but returns a new one with the negated values.

## Related Documentation
- [t_vertex2i](./t_vertex2i.md) - Details about the `t_vertex2i` structure.
- [vertex-doc](../vertex-doc.md) - Central documentation for different types of vertex.

### Return to the home page of the documentation
[Home](../../home.md)