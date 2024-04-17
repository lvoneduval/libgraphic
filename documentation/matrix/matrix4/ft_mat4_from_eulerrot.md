# ft_mat4_from_eulerrot
Creates a 4x4 rotation matrix from Euler angles, representing sequential rotations around the x, y, and z axes. This method is crucial for 3D transformations where complex rotations are decomposed into simpler axis-aligned rotations.

### Parameters
- `t_eulerrot euler`: The Euler angles structure containing rotations around x, y, and z axes in radians.

### Function Details
This function constructs a rotation matrix by generating and combining individual rotation matrices for each axis:
1. **Rotation Matrix Generation**: Separate rotation matrices are created for each of the Euler angles using dedicated functions:
   - `rot_x` for rotation around the x-axis.
   - `rot_y` for rotation around the y-axis.
   - `rot_z` for rotation around the z-axis.
2. **Matrix Multiplication**: The matrices are then combined in a specific order (first z, then y, followed by x) which is standard for Euler angles in many graphics applications to achieve the final rotation matrix.

### Returns
- `t_matrix4`: The composite rotation matrix derived from the Euler angles.

### Example Usage
```c
t_eulerrot eulerRotation = {M_PI / 4, M_PI / 4, M_PI / 4}; // 45-degree rotations around each axis
t_matrix4 rotationMatrix = ft_mat4_from_eulerrot(eulerRotation);
// The resulting matrix `rotationMatrix` now represents the combined rotation.
```

### Notes:
- **Rotation Order**: The order of rotations is critical and follows the convention of ZYX (first around z, then y, and finally x), which is a common standard but might need adjustment based on specific application requirements.
- **Gimbal Lock**: Using Euler angles can lead to gimbal lock, where the loss of one degree of freedom in 3D space occurs, making certain rotations indistinguishable. Using quaternions can help avoid this issue.

## Related Documentation
- [t_matrix4](./t_matrix4.md)
- [matrix-doc](../matrix-doc.md)
- [t_eulerrot](../../rotation/eulerrot/t_eulerrot.md) - Discusses the `t_eulerrot` structure and its applications in defining rotations.

### Return to the home page of the documentation
[Home](../home.md)
