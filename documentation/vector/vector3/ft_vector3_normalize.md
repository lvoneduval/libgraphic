# ft_vector3_normalize
Normalizes a 3D vector to have a magnitude of 1, keeping its direction unchanged. This operation is essential in scenarios where the direction of the vector is needed without the influence of its magnitude.

### Parameters
- `t_vector3 v`: The vector to be normalized.

### Function Details
This function adjusts the vector `v` to have a unit length by dividing each component by the vector's norm (magnitude):
- **Magnitude Calculation**: `sqrt(v.x * v.x + v.y * v.y + v.z * v.z)` computes the Euclidean length of the vector.
- **Normalization**: If the magnitude is not zero, each component of the vector is divided by this magnitude to reduce the length to 1.

### Returns
- `t_vector3`: The normalized vector with the same direction as `v` but with a magnitude of 1.

### Example Usage
```c
t_vector3 direction = {3.0, -3.0, 1.0};
t_vector3 unitDirection = ft_vector3_normalize(direction);
// unitDirection will be approximately {0.8018, -0.8018, 0.2673}, pointing in the same direction but with a magnitude of 1
```

### Notes:
- **Handling Zero Vectors**: If the input vector is a zero vector (magnitude of 0), the function returns a zero vector because a zero vector cannot be normalized.
- **Importance of Normalization**: Normalizing a vector is crucial in ensuring that operations that depend on direction but not magnitude, such as dot product for angle calculation or physical forces, are accurate and consistent.

## Related Documentation
- [t_vector3](./t_vector3.md) - Further details on the 3D vector structure and its usage.
- [vector-md](../vector-doc.md) - Provides details vectors structures.

### Return to the home page of the documentation
[Home](../../home.md)
