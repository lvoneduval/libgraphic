# ft_quat_from_aarot
Converts an axis-angle representation of a rotation into a quaternion. This method is widely used in 3D transformations to ensure smooth rotations and prevent gimbal lock.

### Parameters
- `t_aarot rot`: The axis-angle rotation to convert. The `angle` field represents the rotation angle around the axis defined by the `x`, `y`, and `z` components.

### Function Details
The function performs the conversion by:
- **Angle Halving**: The rotation angle (`rot.angle`) is halved to accommodate the quaternion representation.
- **Sine and Cosine Calculations**: Calculates the sine and cosine of the halved angle.
  - **Sin Component**: Multiplied by the axis components (`x`, `y`, `z`) to get the imaginary part of the quaternion.
  - **Cos Component**: Represents the real part of the quaternion.
- **Normalization**: The resulting quaternion is normalized to ensure its magnitude is 1, which is critical for rotation operations.

### Returns
- `t_quat`: The resulting quaternion that represents the same rotation as the input axis-angle.

### Example Usage
***c
t_aarot axisAngle = {1.0, 0.0, 0.0, M_PI};  // Rotate 180 degrees around the x-axis
t_quat rotationQuat = ft_quat_from_aarot(axisAngle);
// rotationQuat will represent the 180-degree rotation around the x-axis
***

### Notes:
- The input angle should be in radians.
- Normalization of the quaternion is essential to maintain valid rotation properties.

## Related Documentation
- [t_aarot](../aarot//t_aarot.md) - Detailed documentation on the axis-angle rotation structure used in this function.
- [t_quat](./t_quat.md) - Detailed information about the quaternion structure and its operations.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
