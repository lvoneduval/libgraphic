# ft_vector2_magn
Calculates the magnitude (length) of a 2D vector. This measure is essential for numerous operations in physics, graphics, and general vector mathematics, such as normalizing vectors or determining the distance of a point from the origin.

### Parameters
- `t_vector2 v`: The vector whose magnitude is to be calculated.

### Function Details
The magnitude of vector `v` is calculated using the Euclidean norm formula:
- **Euclidean Norm**: `sqrt(v.x * v.x + v.y * v.y)`
This formula computes the square root of the sum of the squared components of the vector, providing the length of the vector from the origin in 2D space.

### Returns
- `float`: The magnitude of the vector. It represents the distance of the vector from the origin in 2D space.

### Example Usage
```c
t_vector2 vector = {3.0, 4.0};
float magnitude = ft_vector2_magn(vector);
// magnitude will be 5.0, as it is a 3-4-5 Pythagorean triplet
```

### Notes:
- **Importance of Magnitude**: The magnitude of a vector is crucial for normalizing the vector to unit length, which is often required in operations involving direction but not magnitude, such as in lighting calculations in graphics.
- **Computational Considerations**: Calculating magnitude involves a square root operation, which can be computationally expensive. Optimize its use in performance-critical applications.

## Related Documentation
- [t_vector2](./t_vector2.md) - Provides details on the 2D vector structure and its operations.
- [vector-md](../vector-doc.md) - Provides details on the 2D vector structure and its operations.

### Return to the home page of the documentation
[Home](../../home.md)
