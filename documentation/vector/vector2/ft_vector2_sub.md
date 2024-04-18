
# ft_vector2_sub
Calculates the subtraction of one 2D vector from another, resulting in a new vector that represents the difference between their respective components. This function is useful in graphics and physics to compute relative positions or changes in vectors.

### Parameters
- `t_vector2 v1`: The vector from which to subtract.
- `t_vector2 v2`: The vector to subtract.

### Function Details
This function computes the subtraction of two vectors `v1` and `v2` by subtracting their corresponding x and y components:
- **X Component Calculation**: `v1.x - v2.x`
- **Y Component Calculation**: `v1.y - v2.y`

### Returns
- `t_vector2`: The resulting vector from the subtraction of `v2` from `v1`.

### Example Usage
```c
t_vector2 position = {10.0, 20.0};
t_vector2 movement = {3.0, 5.0};
t_vector2 newPosition = ft_vector2_sub(position, movement);
// newPosition will have {7.0, 15.0}
```

### Notes:
- **Utility**: Subtraction is often used in simulation for updating positions, calculating displacements, or in algorithms where the relative vector between two points needs to be determined.
- **Consider Precision**: Like all operations with floating-point numbers, subtraction can introduce small precision errors. Ensure accuracy is maintained as needed for your application.

## Related Documentation
- [t_vector2](./t_vector2.md) - Provides details on the 2D vector structure and its operations.
- [vector-md](../vector-doc.md) - Provides details on the 2D vector structure and its operations.

### Return to the home page of the documentation
[Home](../../home.md)