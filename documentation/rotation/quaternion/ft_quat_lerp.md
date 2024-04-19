# ft_quat_lerp
Performs linear interpolation (LERP) between two quaternions. This method is used for interpolating rotations in a straight line from one orientation to another.

### Parameters
- `t_quat a`: The start quaternion for the interpolation.
- `t_quat b`: The end quaternion for the interpolation.
- `float alpha`: The interpolation factor, ranging from 0.0 (at `a`) to 1.0 (at `b`).

### Function Details
Linear interpolation between two quaternions is calculated by:
- **Component-wise Interpolation**: Each component of the quaternion (x, y, z, w) is interpolated independently using the formula \( out = (1 - alpha) * a + alpha * b \).

### Returns
- `t_quat`: The interpolated quaternion. It represents a rotation that is part-way between the two input quaternions, depending on the value of `alpha`.

### Example Usage
```c
t_quat startQuat = {1, 0, 0, 0}; // Represents no rotation
t_quat endQuat = {0, 1, 0, 0}; // Represents a 180-degree rotation around the y-axis
float t = 0.5; // Halfway interpolation
t_quat midQuat = ft_quat_lerp(startQuat, endQuat, t);
// midQuat will be approximately {0.5, 0.5, 0, 0}
```

### Notes:
- Quaternion interpolation using LERP does not always result in a unit quaternion. Normalization may be required after interpolation to ensure the quaternion remains valid for rotation purposes.
- LERP is fast and easy to compute but does not guarantee constant speed or minimal path. For these properties, Spherical Linear Interpolation (SLERP) might be preferred.

## Related Documentation
- [t_quat](./t_quat.md) - Provides detailed information about the quaternion structure and its operations.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
