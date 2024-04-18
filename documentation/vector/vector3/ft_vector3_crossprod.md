# ft_vector3_crossprod
Calculates the cross product of two 3D vectors, resulting in a vector perpendicular to the plane containing the original vectors. This operation is crucial for determining the normal vector to a surface, which is widely used in 3D rendering, physics simulations, and more.

### Parameters
- `t_vector3 v1`: The first vector operand.
- `t_vector3 v2`: The second vector operand.

### Function Details
This function computes the cross product of vectors `v1` and `v2` by applying the following formulas:
- **X Component**: `v1.y * v2.z - v1.z * v2.y`
- **Y Component**: `v1.z * v2.x - v1.x * v2.z`
- **Z Component**: `v1.x * v2.y - v1.y * v2.x`
These calculations ensure that the resulting vector is orthogonal to both `v1` and `v2`.

### Returns
- `t_vector3`: The vector resulting from the cross product, orthogonal to both input vectors and with a direction given by the right-hand rule.

### Example Usage
```c
t_vector3 vectorA = {3.0, -3.0, 1.0};
t_vector3 vectorB = {4.0, 9.0, 2.0};
t_vector3 normalVector = ft_vector3_crossprod(vectorA, vectorB);
// normalVector will be {-15.0, -2.0, 39.0}
```

### Notes:
- **Direction**: The direction of the resulting vector follows the right-hand rule, which is standard in mathematics and physics for determining the direction of cross products.
- **Zero Result**: If the vectors are parallel, the cross product will be a zero vector, indicating no perpendicular direction exists within their plane.

## Related Documentation
- [t_vector3](./t_vector3.md) - Further details on the 3D vector structure and its usage.

### Return to the home page of the documentation
[Home](../../home.md)