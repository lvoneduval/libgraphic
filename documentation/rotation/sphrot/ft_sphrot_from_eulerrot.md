# ft_sphrot_from_eulerrot
Converts an Euler rotation representation into a spherical rotation representation. This function bridges Euler angles and the spherical angle system, often used in applications where spherical coordinates are more natural or efficient.

### Parameters
- `t_eulerrot euler`: The Euler rotation to be converted, specified in terms of rotations around the X, Y, and Z axes.

### Function Details
This function first converts the Euler rotation into a quaternion representation, using `ft_quat_from_eulerrot`. It then translates this quaternion into a spherical rotation, utilizing `ft_sphrot_from_quat`. This method ensures the Euler rotation is accurately represented in a format that captures rotational orientation in terms of latitude, longitude, and a rotation angle about the axis.

### Returns
- `t_sphrot`: The spherical rotation structure representing the same rotation as the given Euler angles.

### Example Usage
```c
t_eulerrot euler = {x: M_PI / 3, y: M_PI / 4, z: M_PI / 6};
t_sphrot sphrot = ft_sphrot_from_eulerrot(euler);
// sphrot will represent the spherical equivalent of the Euler rotation
```

### Notes:
- Euler angles can sometimes lead to issues like gimbal lock; converting them into spherical coordinates can help in applications like 3D graphics and robotics, where such problems need to be avoided.
- This function relies on quaternion intermediate steps to prevent loss of generality in rotations.

## Related Documentation
- [t_eulerrot](../eulerrot//t_eulerrot.md) - Provides details on the Euler rotation structure and its operations.
- [t_sphrot](./t_sphrot.md) - Documentation on the spherical rotation structure used in this function.
- [rotation-doc](../rotation-doc.md) - Comprehensive documentation on different types of rotations and transformations.

### Return to the home page of the documentation
[Home](../../home.md)
