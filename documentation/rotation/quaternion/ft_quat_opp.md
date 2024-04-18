# ft_quat_opp
Calculates the opposite of a quaternion by negating its vector components while preserving the scalar component. This operation effectively reflects the quaternion's vector part through the origin.

### Parameters
- `t_quat q`: The quaternion from which the opposite is calculated.

### Function Details
This function negates each vector component of the input quaternion:
- **W Component**: Remains unchanged as it represents the scalar part of the quaternion.
- **X, Y, Z Components**: Negated to produce the opposite direction for each respective axis.

### Returns
- `t_quat`: The quaternion after negation of its vector components. The resulting quaternion points in the opposite direction on the unit sphere.

### Example Usage
***c
t_quat originalQuat = {0.707, 0.707, 0.0, 0.0}; // Example quaternion
t_quat oppositeQuat = ft_quat_opp(originalQuat);
// oppositeQuat will be {0.707, -0.707, 0.0, 0.0}
***

### Notes:
- Negating the vector part of a quaternion is useful in scenarios where the inverse direction of an orientation is needed without affecting the rotation's magnitude around the axis.
- This function does not affect the quaternion's ability to represent a rotation but reflects its axis.

## Related Documentation
- [t_quat](./t_quat.md) - Provides detailed information about the quaternion structure and its operations.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
