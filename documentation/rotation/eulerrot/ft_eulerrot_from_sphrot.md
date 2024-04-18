# ft_eulerrot_from_sphrot
Converts a spherical rotation into Euler angles using a quaternion as an intermediate representation to ensure a stable and accurate conversion.

### Parameters
- `t_sphrot sphrot`: The spherical rotation to convert. This structure contains latitude (lat), longitude (lon), and an angle of rotation around the axis defined by these coordinates.

### Function Details
This function performs the conversion through the following steps:
1. **Quaternion Conversion**: Converts the spherical rotation into a quaternion. The spherical rotation is defined by angles in a spherical coordinate system, which are then used to define an axis and an angle for the quaternion.
2. **Euler Conversion**: Converts the resulting quaternion into Euler angles. This transformation decomposes the quaternion into rotations around the X, Y, and Z axes.

### Returns
- `t_eulerrot`: The Euler angles derived from the spherical rotation, which represent the rotations around the X (roll), Y (pitch), and Z (yaw) axes.

### Example Usage
***c
t_sphrot sphrot = {M_PI / 4, M_PI / 3, M_PI / 6}; // Spherical rotation with latitude, longitude, and rotation angle
t_eulerrot euler = ft_eulerrot_from_sphrot(sphrot);
// euler will contain the Euler angles corresponding to the spherical rotation
***

### Notes:
- Converting through a quaternion intermediary helps prevent issues like gimbal lock that can occur when directly converting spherical coordinates to Euler angles.
- This method ensures that the conversion respects the 3D rotational semantics implied by the spherical coordinates.

## Related Documentation
- [t_sphrot](../sphrot/t_sphrot.md) - Documentation on the spherical rotation structure used in this function.
- [t_quat](../quaternion/t_quat.md) - Intermediate quaternion representation used for the conversion.
- [t_eulerrot](./ft_eulerrot_add.mdt_eulerrot.md) - Detailed documentation on the Euler angles structure returned by this function.
- [rotation-doc](../rotation-doc.md) - Overview of different types of rotation representations.

### Return to the home page of the documentation
[Home](../../home.md)
