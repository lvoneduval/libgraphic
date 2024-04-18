# ft_quat_from_eulerrot
Converts Euler rotation angles (roll, pitch, yaw) into a quaternion. This conversion is crucial for applications requiring stable and gimbal-lock-free rotations in three-dimensional space.

### Parameters
- `t_eulerrot euler`: The Euler angles to convert, where `x` is roll, `y` is pitch, and `z` is yaw, all in radians.

### Function Details
The function computes the quaternion by first calculating half-angle trigonometric values for each Euler component:
- **cy, sy**: Cosine and sine of half the yaw angle.
- **cp, sp**: Cosine and sine of half the pitch angle.
- **cr, sr**: Cosine and sine of half the roll angle.

Using these values, the quaternion components are calculated as follows:
- **w (scalar component)**: `cr * cp * cy + sr * sp * sy`
- **x (x-axis component)**: `sr * cp * cy - cr * sp * sy`
- **y (y-axis component)**: `cr * sp * cy + sr * cp * sy`
- **z (z-axis component)**: `cr * cp * sy - sr * sp * cy`

### Returns
- `t_quat`: The resulting quaternion representing the input Euler angles.

### Example Usage
***c
t_eulerrot eulerAngles = {M_PI / 6, M_PI / 4, M_PI / 3}; // Roll, Pitch, Yaw in radians
t_quat rotationQuat = ft_quat_from_eulerrot(eulerAngles);
// rotationQuat now represents the same rotation defined by eulerAngles
***

### Notes:
- Euler angles are converted in the order of roll (x-axis), pitch (y-axis), and yaw (z-axis).
- Ensure that Euler angles are provided in radians for accurate conversions.

## Related Documentation
- [t_eulerrot](../eulerrot/t_eulerrot.md) - Documentation on the Euler angle rotation structure.
- [t_quat](./t_quat.md) - Detailed documentation on quaternion operations.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
