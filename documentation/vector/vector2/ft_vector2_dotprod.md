# ft_vector2_dotprod
Calculates the dot product of two 2D vectors. The dot product is a crucial operation in physics and computer graphics, providing a measure of the vector alignment and the cosine of the angle between them.

### Parameters
- `t_vector2 v1`: The first vector.
- `t_vector2 v2`: The second vector.

### Function Details
The dot product of two vectors `v1` and `v2` is calculated using the formula:
- **Dot Product Formula**: `v1.x * v2.x + v1.y * v2.y`
This operation results in a scalar value that represents the magnitude of the projection of one vector onto another when they are placed tail-to-tail.

### Returns
- `float`: The scalar result of the dot product.

### Example Usage
```c
t_vector2 vectorA = {3.0, 4.0};
t_vector2 vectorB = {2.0, 0.0};
float dotProduct = ft_vector2_dotprod(vectorA, vectorB);
// dotProduct will be 6.0
```

### Notes:
- **Positive Value**: Indicates that the vectors are oriented in the same general direction.
- **Negative Value**: Indicates that the vectors are oriented in opposite directions.
- **Zero Value**: Indicates that the vectors are perpendicular (orthogonal to each other).

## Related Documentation
- [t_vector2](./t_vector2.md) - Provides details on 2D vector operations and properties.
- [vector-doc](../vector-doc.md)

### Return to the home page of the documentation
[Home](../home.md)
