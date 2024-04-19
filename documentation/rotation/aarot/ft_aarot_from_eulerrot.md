# ft_aarot_from_eulerrot
Converts Euler angles to an axis-angle rotation, utilizing quaternions for the intermediate conversion to ensure a robust transformation process.

### Parameters
- `t_eulerrot euler`: The Euler angles to convert. This structure contains three angles representing rotations around the X, Y, and Z axes, respectively.

### Function Details
This function operates in two main steps:
1. **Quaternion Conversion**: First, the Euler angles are converted into a quaternion to leverage quaternion advantages in handling rotations (such as avoiding gimbal lock).
2. **Axis-Angle Conversion**: The quaternion is then converted into an axis-angle representation, which is more intuitive and commonly used in certain applications like rotational animations and physics simulations.

### Returns
- `t_aarot`: The resulting axis-angle rotation that represents the same 3D rotation as the input Euler angles.

### Example Usage
```c
t_eulerrot euler = {M_PI/2, M_PI/2, M_PI/2}; // 90 degrees rotation about X, Y, and Z
t_aarot aarot = ft_aarot_from_eulerrot(euler);
// aarot now contains the axis and angle representing the same rotation as the euler angles
```

### Notes:
- This function is particularly useful in scenarios where an axis-angle representation is required, but the initial rotation data is provided in Euler angles. It ensures a smooth transition between rotation formats while preserving the rotational semantics.

## Related Documentation
- [t_eulerrot](../eulerrot/t_eulerrot.md) - Documentation on the Euler angle rotation structure.
- [t_quat](../quaternion/t_quat.md) - Documentation on quaternions, which are used as an intermediate step in this conversion.
- [t_aarot](./t_aarot.md) - Documentation on the axis-angle rotation structure returned by this function.
- [rotation-doc](../rotation-doc.md) - Central documentation for different types of rotation representations.

### Return to the home page of the documentation
[Home](../../home.md)
