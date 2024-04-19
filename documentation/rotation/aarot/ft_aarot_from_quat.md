# ft_aarot_from_quat
Converts a quaternion into an axis-angle rotation format, normalizing the quaternion to ensure the rotation axis is a unit vector.

### Parameters
- `t_quat q`: The quaternion to convert. This quaternion represents a rotation in 3D space and consists of components x, y, z (vector part) and w (scalar part).

### Function Details
This function performs the conversion through the following steps:
1. **Normalization**: The quaternion is normalized to avoid scaling the rotation axis incorrectly.
2. **Angle Calculation**: The rotation angle is calculated from the quaternion's scalar component (`w`) using the arccosine function, which is then doubled to get the full rotation angle.
3. **Axis Calculation**: The vector part of the quaternion (x, y, z) represents the axis of rotation. This is normalized to ensure it is a unit vector, which is essential for the axis-angle representation to be correct.
4. **Condition Handling**: If the norm of the vector part is near zero (less than 0.0005), the function adjusts the axis components to avoid division by zero or extremely small numbers that could lead to numerical instability.

### Returns
- `t_aarot`: The resulting axis-angle rotation where:
  - `angle` is the rotation angle in radians.
  - `x`, `y`, `z` define the axis of rotation as a unit vector.

### Example Usage
***c
t_quat q = {0.0, 1.0, 0.0, 0.0};  // Quaternion representing 180 degrees rotation around the Y-axis
t_aarot aarot = ft_aarot_from_quat(q);
// aarot will represent a rotation of pi radians around the Y-axis
***

### Notes:
- The conversion assumes the quaternion is properly formed and represents a rotation. Non-rotation quaternions might yield unexpected results.
- The function includes checks to handle cases where the quaternion is close to zero to avoid divisions by small numbers.

## Related Documentation
- [t_quat](../quaternion/t_quat.md) - Detailed documentation on the quaternion structure used in this function.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and their interactions.
- [t_aarot](./t_aarot.md) - Documentation on the axis-angle structure being returned.

### Return to the home page of the documentation
[Home](../../home.md)
