# ft_vector2_new
Constructs a new 2D vector with specified x and y components. This function is essential for initializing vectors that represent points, displacements, or directions in a two-dimensional space.

### Parameters
- `float x`: The x-component of the new vector.
- `float y`: The y-component of the new vector.

### Function Details
This function sets up a 2D vector with the given x and y values:
- **Initialization**: Directly assigns the provided `x` and `y` values to the corresponding components of the vector.

### Returns
- `t_vector2`: The newly created vector with the specified components.

### Example Usage
```c
t_vector2 position = ft_vector2_new(5.0, 10.0);
// position is now a vector with x = 5.0 and y = 10.0
```

### Notes:
- **Usage**: Commonly used in scenarios where a vector needs to be created from scratch with known component values, such as setting initial positions or directions in simulations and graphical renderings.
- **Efficiency**: This function is optimized for quick initialization of vector structures, making it suitable for performance-sensitive applications where many vectors need to be instantiated rapidly.

## Related Documentation
- [t_vector2](./t_vector2.md) - Provides details on the 2D vector structure and its operations.
- [vector-md](../vector-doc.md) - Provides details on the 2D vector structure and its operations.

### Return to the home page of the documentation
[Home](../home.md)
