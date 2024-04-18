# ft_vector3_dotprod
Computes the dot product of two 3D vectors. The dot product is a scalar value that quantifies the cosine of the angle between the two vectors when they are placed tail-to-tail, making it invaluable in determining alignment and projections.

### Parameters
- `t_vector3 v1`: The first vector operand.
- `t_vector3 v2`: The second vector operand.

### Function Details
This function calculates the dot product by summing the products of the corresponding components of vectors `v1` and `v2`:
- **Calculation Formula**: `(v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z)`
This scalar result represents the magnitude of the projection of one vector onto another and also the cosine of the angle between the vectors, scaled by the magnitudes of the vectors.

### Returns
- `float`: The scalar value of the dot product.

### Example Usage
```c
t_vector3 vectorA = {1.0, 3.0, -5.0};
t_vector3 vectorB = {4.0, -2.0, -1.0};
float dotProduct = ft_vector3_dotprod(vectorA, vectorB);
// dotProduct will be 3.0 (1*4 + 3*(-2) + (-5)*(-1))
```

### Notes:
- **Interpretation of Result**:
  - **Positive Value**: Indicates that the vectors are oriented in the same general direction.
  - **Negative Value**: Indicates that the vectors are oriented in opposite directions.
  - **Zero Value**: Indicates that the vectors are perpendicular, meaning the angle between them is 90 degrees.
- **Applications**: Dot product is used to determine if vectors are orthogonal, for projection calculations, and in lighting calculations in 3D graphics where the angle relative to the light source impacts shading.

## Related Documentation
- [t_vector3](./t_vector3.md) - Provides details on the 2D vector structure and its operations.
- [vector-md](../vector-doc.md) - Provides details on the 2D vector structure and its operations.

### Return to the home page of the documentation
[Home](../../home.md)
