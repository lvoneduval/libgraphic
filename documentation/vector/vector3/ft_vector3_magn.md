
# ft_vector3_magn
Calculates the magnitude (or length) of a 3D vector using the Euclidean norm. This function is essential for determining the size of a vector in space, which is fundamental in operations requiring measurements of vector lengths such as normalizing or determining distances.

### Parameters
- `t_vector3 v`: The vector whose magnitude is to be computed.

### Function Details
This function computes the magnitude of vector `v` by taking the square root of the sum of the squares of its components:
- **Magnitude Calculation**: `sqrt(v.x * v.x + v.y * v.y + v.z * v.z)`
This formula derives from the Pythagorean theorem in three dimensions, providing the Euclidean length of the vector.

### Returns
- `float`: The magnitude of the vector, a non-negative value representing the length of `v` from the origin.

### Example Usage
```c
t_vector3 vector = {3.0, 4.0, 12.0};
float magnitude = ft_vector3_magn(vector);
// magnitude will be 13.0, which is the Euclidean length of the vector from the origin
```

### Notes:
- **Zero Vector**: The magnitude of a zero vector (where x, y, and z are all zero) will be 0.
- **Usage**: The magnitude is used directly in vector normalization (to convert a vector to unit length) and indirectly in many other vector operations that require the vector's length, such as scaling or adjusting vector direction.

## Related Documentation
- [t_vector3](./t_vector3.md) - Provides details on the 2D vector structure and its operations.
- [vector-md](../vector-doc.md) - Provides details on the 2D vector structure and its operations.

### Return to the home page of the documentation
[Home](../../home.md)