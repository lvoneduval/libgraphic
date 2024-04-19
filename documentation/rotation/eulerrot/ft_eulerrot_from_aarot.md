# ft_eulerrot_from_aarot
Converts an axis-angle rotation to Euler angles by first converting to a quaternion, thus ensuring an accurate and stable conversion process.

### Parameters
- `t_aarot aarot`: The axis-angle rotation to convert. This contains the rotation axis (x, y, z) and the rotation angle.

### Function Details
This function converts the axis-angle representation into Euler angles through these steps:
1. **Quaternion Conversion**: First, the axis-angle rotation is converted into a quaternion. This step leverages the robust representation of rotations provided by quaternions to avoid issues like gimbal lock.
2. **Euler Conversion**: The quaternion is then converted into Euler angles, providing the final output. This conversion breaks down the quaternion into roll, pitch, and yaw components which correspond to rotations about the X, Y, and Z axes, respectively.

### Returns
- `t_eulerrot`: The Euler angles resulting from the conversion, representing the roll, pitch, and yaw of the original axis-angle rotation.

### Example Usage
```c
t_aarot axisAngle = {1.0, 0.0, 0.0, M_PI / 2}; // 90 degrees rotation around the X-axis
t_eulerrot euler = ft_eulerrot_from_aarot(axisAngle);
// euler will approximately be {M_PI / 2, 0, 0}, representing the 90-degree rotation around the X-axis
```

### Notes:
- This function is particularly useful in scenarios where rotations are initially expressed in axis-angle form but need to be utilized in systems that prefer Euler angles.
- It is important to be aware that while the conversion through quaternions helps to mitigate numerical instability, the interpretation of Euler angles can still suffer from gimbal lock under certain conditions.

## Related Documentation
- [t_aarot](../aarot//t_aarot.md) - Detailed documentation on the axis-angle rotation structure used in this function.
- [t_quat](../quaternion//t_quat.md) - Intermediate quaternion representation used for the conversion.
- [t_eulerrot](./t_eulerrot.md) - Detailed documentation on the Euler angles structure returned by this function.
- [rotation-doc](../rotation-doc.md) - Overview of different types of rotation representations.

### Return to the home page of the documentation
[Home](../../home.md)
