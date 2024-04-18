# ft_vector2_det
Calculates the determinant of two 2D vectors. This value is useful in determining the orientation of the vectors relative to each other and in various geometric calculations, such as finding the area of a parallelogram formed by the vectors.

### Parameters
- `t_vector2 v1`: The first vector.
- `t_vector2 v2`: The second vector.

### Function Details
The determinant of two vectors `v1` and `v2` is calculated using the formula:
- **Determinant Formula**: `v1.x * v2.y - v1.y * v2.x`
This formula results in a scalar that represents the area of the parallelogram spanned by the vectors if they are treated as sides of the parallelogram. The sign of the determinant indicates the orientation of the vectors (clockwise or counterclockwise).

### Returns
- `float`: The scalar value of the determinant.

### Example Usage
```c
t_vector2 vectorA = {4.0, 3.0};
t_vector2 vectorB = {1.0, 5.0};
float detValue = ft_vector2_det(vectorA, vectorB);
// detValue will be 17.0
```

### Notes:
- **Positive Determinant**: Indicates that the sequence of vector `v1` to `v2` is counterclockwise.
- **Negative Determinant**: Indicates a clockwise sequence.
- **Zero Determinant**: Indicates that the vectors are collinear (parallel).

## Related Documentation
- [t_vector2](./t_vector2.md) - Further details on the 2D vector structure and its usage.
- [vector-doc](../vector-doc.md)

### Return to the home page of the documentation
[Home](../home.md)
