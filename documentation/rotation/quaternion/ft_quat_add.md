# ft_quat_add
Adds two quaternions component-wise, resulting in a quaternion that combines the scalar and vector parts from both operands.

### Parameters
- `t_quat q1`: The first quaternion.
- `t_quat q2`: The second quaternion to be added to the first.

### Function Details
This function adds each corresponding component of the two quaternions:
- **W Component**: Sum of the scalar parts.
- **X Component**: Sum of the x-axis components.
- **Y Component**: Sum of the y-axis components.
- **Z Component**: Sum of the z-axis components.

### Returns
- `t_quat`: The resulting quaternion after the addition. This quaternion is not guaranteed to be normalized and may require normalization to be used effectively in rotation applications.

### Example Usage
***c
t_quat quat1 = {1.0, 0.0, 0.0, 0.0};
t_quat quat2 = {0.0, 1.0, 0.0, 0.0};
t_quat resultQuat = ft_quat_add(quat1, quat2);
// resultQuat will be {1.0, 1.0, 0.0, 0.0}
***

### Notes:
- Quaternion addition is not commonly used for combining rotations as the result does not represent a meaningful rotation without normalization.
- The result should be normalized if it will be used to represent a rotation, as non-normalized quaternions do not correctly describe rotations.

## Related Documentation
- [t_quat](./t_quat.md) - Provides details on the quaternion structure and its operations.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
