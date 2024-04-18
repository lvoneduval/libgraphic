# ft_eulerrot_from_quat
Converts a quaternion to Euler angles (roll, pitch, and yaw), providing a human-readable form of the rotation that the quaternion represents.

### Parameters
- `t_quat quat`: The quaternion from which to derive the Euler angles. Quaternions provide a robust way to represent 3D rotations without suffering from gimbal lock.

### Function Details
This function converts the quaternion into Euler angles through the following steps:
1. **Roll (X-axis rotation)**: Calculated using the formula involving the combination of the quaternion components `w`, `x`, `y`, and `z` to handle the roll rotation around the X-axis.
2. **Pitch (Y-axis rotation)**: Directly computed from the quaternion components to determine the pitch. Special cases are handled where pitch approaches ±90 degrees (±π/2 radians), which corresponds to extreme upward or downward orientations.
3. **Yaw (Z-axis rotation)**: Extracted using a combination of quaternion components, representing the yaw rotation around the Z-axis.

### Returns
- `t_eulerrot`: The Euler angles derived from the quaternion. These angles are:
  - `x` (roll): Rotation about the X-axis.
  - `y` (pitch): Rotation about the Y-axis.
  - `z` (yaw): Rotation about the Z-axis.

### Example Usage
***c
t_quat quat = {0.707, 0.0, 0.707, 0.0};  // Quaternion representing 90 degrees rotation around the Y-axis
t_eulerrot euler = ft_eulerrot_from_quat(quat);
// euler will approximately be {0, M_PI/2, 0}, depending on the sign and exact representation of the quaternion
***

### Notes:
- Euler angles converted from quaternions can exhibit what is known as "gimbal lock," a condition where two of the three axes align and one degree of rotational freedom is lost.
- The conversion handles cases where the pitch angle is close to ±90 degrees, which can result in numerical instabilities due to precision limitations in floating-point calculations.

## Related Documentation
- [t_quat](../quaternion/t_quat.md) - Detailed documentation on the quaternion structure used in this function.
- [t_eulerrot](./t_eulerrot.md) - Documentation on the Euler angles structure returned by this function.
- [rotation-doc](../rotation-doc.md) - Overview of different types of rotation representations.

### Return to the home page of the documentation
[Home](../../home.md)