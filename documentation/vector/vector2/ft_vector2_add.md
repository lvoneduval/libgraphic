# ft_vector2_add
Adds two 2D vectors together, resulting in a new vector that represents the component-wise addition of the two inputs.

### Parameters
- `t_vector2 v1`: The first vector to add.
- `t_vector2 v2`: The second vector to add.

### Function Details
This function calculates the addition of two vectors `v1` and `v2` by adding their corresponding x and y components:
- **X Component Calculation**: `v1.x + v2.x`
- **Y Component Calculation**: `v1.y + v2.y`

### Returns
- `t_vector2`: The resulting vector from the addition of `v1` and `v2`.

### Example Usage
```c
t_vector2 vectorA = {3.0, 4.0};
t_vector2 vectorB = {1.0, 2.0};
t_vector2 resultVector = ft_vector2_add(vectorA, vectorB);
// resultVector will have {4.0, 6.0}
```

### Notes:
- **Usage**: Commonly used in graphics programming to compute new positions or offsets.
- **Efficiency**: This is a basic operation and is highly optimized for performance.

## Related Documentation
- [t_vector2](./t_vector2.md) - Provides details on the 2D vector structure and other related operations.
- [vector-doc](../vector-doc.md)

### Return to the home page of the documentation
[Home](../home.md)
