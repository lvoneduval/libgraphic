# ft_vector2_scale
Scales a 2D vector by a scalar factor. This operation multiplies each component of the vector by a given scalar, effectively resizing the vector while maintaining its direction.

### Parameters
- `t_vector2 v`: The vector to be scaled.
- `float n`: The scalar factor by which the vector's components are multiplied.

### Function Details
This function modifies the magnitude of vector `v` by scaling its x and y components by the scalar `n`:
- **X Component Scaling**: `v.x * n`
- **Y Component Scaling**: `v.y * n`

### Returns
- `t_vector2`: The scaled vector, which has the same direction as the original but with its magnitude adjusted by the factor `n`.

### Example Usage
```c
t_vector2 velocity = {3.0, 4.0};
float scalingFactor = 2.0;
t_vector2 scaledVelocity = ft_vector2_scale(velocity, scalingFactor);
// scaledVelocity will be {6.0, 8.0}, doubling the original velocity
```

### Notes:
- **Use Cases**: Commonly used in physics calculations where velocity needs to be adjusted, in graphics for resizing vector-based elements, and in animations where proportional changes are required.
- **Vector Direction**: The scaling operation does not change the direction of the vector unless the scale factor is negative, which would then reverse the direction.

## Related Documentation
- [t_vector2](./t_vector2.md) - Provides details on the 2D vector structure and its operations.
- [vector-md](../vector-doc.md) - Provides details on the 2D vector structure and its operations.

### Return to the home page of the documentation
[Home](../../home.md)
