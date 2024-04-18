# ft_vector3_new
Creates a new 3D vector with specified x, y, and z components. This constructor is crucial for defining vectors quickly and precisely, often used in initializing positions, directions, or other vector-related data in 3D space.

### Parameters
- `float x`: The x component of the new vector.
- `float y`: The y component of the new vector.
- `float z`: The z component of the new vector.

### Function Details
This function initializes a vector `dst` with the given x, y, and z values:
- **X Component**: Set to the provided `x` value.
- **Y Component**: Set to the provided `y` value.
- **Z Component**: Set to the provided `z` value.

### Returns
- `t_vector3`: The newly created vector with the specified components.

### Example Usage
```c
t_vector3 position = ft_vector3_new(8.0, 15.0, 17.0);
// position is now initialized to {8.0, 15.0, 17.0}
```

### Notes:
- **Utility**: Essential in scenarios where vectors need to be created from scratch, especially in applications involving 3D modeling, physics simulations, and graphical computations.
- **Flexibility**: Allows for direct and explicit setting of vector components, facilitating precise control over vector values.

## Related Documentation
- [t_vector3](./t_vector3.md) - Provides details on the 2D vector structure and its operations.
- [vector-md](../vector-doc.md) - Provides details on the 2D vector structure and its operations.

### Return to the home page of the documentation
[Home](../../home.md)