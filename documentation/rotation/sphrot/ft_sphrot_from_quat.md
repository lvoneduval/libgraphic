# ft_sphrot_from_quat
Converts a quaternion into a spherical rotation representation. This function is useful for interpreting quaternion rotations in terms of spherical angles, which are more intuitive for certain applications like celestial mechanics or 3D graphics.

### Parameters
- `t_quat q`: The quaternion to be converted into spherical coordinates.

### Function Details
This function computes the spherical rotation representation from the quaternion by extracting and converting the quaternion's components into latitude and longitude angles, along with the rotation angle. The function ensures accuracy even for small magnitudes of the quaternion's vector part.

### Returns
- `t_sphrot`: The spherical rotation coordinates that represent the same rotation as the input quaternion.

### Example Usage
```c
t_quat quat = {0.0, 0.707, 0.707, 0.0}; // Quaternion representing a rotation around Y-axis by 90 degrees
t_sphrot sphrot = ft_sphrot_from_quat(quat);
// sphrot will have lat, lon values representing the orientation and angle corresponding to the input quaternion
```

### Notes:
- **Latitude Calculation**: Uses `asinf(q.y)` to determine the pitch.
- **Longitude Calculation**: Uses `atan2f(q.z, q.x)` for the yaw, handling cases where the x and z components are close to zero.
- **Normalization**: Before calculating angles, the quaternion is normalized to avoid distortions in angle calculations due to scaling.

## Related Documentation
- [t_sphrot](./t_sphrot.md) - Documentation on the spherical rotation structure used in this function.
- [t_quat](../quaternion/t_quat.md) - Details the quaternion structure used for 3D rotations.
- [rotation-doc](../rotation-doc.md) - Provides a comprehensive overview of rotation representations.

### Return to the home page of the documentation
[Home](../../home.md)
