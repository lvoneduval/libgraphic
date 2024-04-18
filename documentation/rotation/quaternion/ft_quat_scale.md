# ft_quat_scale
Scales all components of a quaternion by a scalar value, effectively modifying the magnitude of the quaternion without changing its direction.

### Parameters
- `t_quat q`: The quaternion to scale.
- `float n`: The scalar by which to multiply each component of the quaternion.

### Function Details
This function multiplies each component of the quaternion (scalar and vector parts) by the scalar value `n`:
- **W Component**: Scaled scalar part.
- **X, Y, Z Components**: Scaled vector parts, affecting the axis of rotation and the rotation angle implicitly.

### Returns
- `t_quat`: The resulting quaternion after scaling. Note that this operation may affect the normalization of the quaternion.

### Example Usage
***c
t_quat quat = {0.707, 0.707, 0.0, 0.0}; // Quaternion representing a 90-degree rotation around the XZ plane
float scaleFactor = 0.5;
t_quat scaledQuat = ft_quat_scale(quat, scaleFactor);
// scaledQuat will be {0.3535, 0.3535, 0.0, 0.0}
***

### Notes:
- Scaling a quaternion is useful for blending rotations or adjusting the interpolation factor in animation and simulation tasks.
- It is important to re-normalize the quaternion after scaling if it will be used to represent a rotation, as scaling can alter its norm away from 1, which is required for valid rotation quaternions.

## Related Documentation
- [t_quat](./t_quat.md) - Provides detailed information about the quaternion structure and its operations.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
