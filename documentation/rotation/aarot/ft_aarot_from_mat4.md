# ft_aarot_from_mat4
Converts a 4x4 transformation matrix into an axis-angle rotation, ensuring accurate rotation preservation using quaternions for intermediate conversion.

### Parameters
- `t_matrix4 mat`: The 4x4 transformation matrix to convert. This matrix is assumed to represent a rotation (and potentially other transformations like scaling or translation).

### Function Details
The conversion process involves two main steps:
1. **Quaternion Conversion**: The function first converts the transformation matrix into a quaternion. This step encapsulates the rotation in a format that is less susceptible to issues like gimbal lock and provides smooth interpolations.
2. **Axis-Angle Conversion**: The quaternion is then converted into an axis-angle format. The axis-angle format expresses the rotation as an axis of rotation and an angle rotated around that axis, which is often useful for certain physics calculations and animation keyframes.

### Returns
- `t_aarot`: The axis-angle rotation that equivalently represents the rotation component of the input matrix.

### Example Usage
```c
t_matrix4 mat = {
    {1, 0, 0, 0},
    {0, 1, 0, 0},
    {0, 0, 1, 0},
    {0, 0, 0, 1}
}; // Identity matrix representing no rotation
t_aarot aarot = ft_aarot_from_mat4(mat);
// aarot will represent a null rotation around any axis with zero angle
```

### Notes:
- This function is crucial in scenarios where a rotation needs to be extracted from a transformation matrix that might contain other transformations like scaling or translation.
- The accuracy of the conversion can depend on the representation of the matrix and the presence of uniform scaling.

## Related Documentation
- [t_matrix4](../../matrix/matrix4/t_matrix4.md) - Documentation on the matrix used as input for this function.
- [t_quat](../quaternion/t_quat.md) - Intermediate quaternion representation used in the conversion process.
- [t_aarot](./t_aarot.md) - Final axis-angle rotation structure produced by this function.
- [rotation-doc](../rotation-doc.md) - Central documentation for different types of rotation representations.

### Return to the home page of the documentation
[Home](../../home.md)
