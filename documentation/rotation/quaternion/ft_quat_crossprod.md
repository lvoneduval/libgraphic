# ft_quat_crossprod
Calculates the cross product of two quaternions. This function focuses on the vector parts of the quaternions, ignoring the scalar component for the result.

### Parameters
- `t_quat q1`: The first quaternion.
- `t_quat q2`: The second quaternion.

### Function Details
The cross product is calculated similarly to the cross product of vectors, applied to the vector components of the quaternions. The resulting quaternion's scalar (`w`) component is set to zero, indicating that the result is purely vectorial.

### Returns
- `t_quat`: The quaternion representing the cross product, with the scalar part as zero.

### Example Usage
***c
t_quat q1 = {x: 1.0, y: 0.0, z: 0.0, w: 0.0};
t_quat q2 = {x: 0.0, y: 1.0, z: 0.0, w: 0.0};
t_quat crossProd = ft_quat_crossprod(q1, q2);
// crossProd will be {0.0, 0.0, 1.0, 0.0}
***

### Notes:
- The resulting quaternion is purely vectorial, which means its scalar component is zero. This can be interpreted as a direction vector in 3D space.
- The function assumes both quaternions are pure (i.e., their scalar component is zero) and the result reflects the perpendicular vector to the plane formed by the two input quaternions.

## Related Documentation
- [t_quat](./t_quat.md) - Provides details on the quaternion structure and its operations.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
