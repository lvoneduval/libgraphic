# ft_quat_from_mat4
Converts a 4x4 rotation matrix to a quaternion. This function is essential for situations where matrix transformations need to be expressed or interpolated as quaternions.

### Parameters
- `t_matrix4 m`: The 4x4 rotation matrix from which to derive the quaternion.

### Function Details
The conversion from a rotation matrix to a quaternion involves:
- **Trace Calculation**: Compute the trace of the matrix, which is the sum of the diagonal elements. This trace is used to compute the scalar part of the quaternion (w).
- **Component Calculations**: Each component of the quaternion (x, y, z) is calculated based on specific matrix elements and the trace. The components are derived using the relationships between the matrix elements and the quaternion formulae.
- **Sign Adjustments**: The signs of the quaternion's vector components (x, y, z) are adjusted based on the cross-product of the corresponding matrix rows, ensuring the correct orientation.

### Returns
- `t_quat`: The quaternion that corresponds to the rotation represented by the input matrix.

### Example Usage
***c
t_matrix4 rotationMatrix = {
    {0, -1, 0, 0},
    {1, 0, 0, 0},
    {0, 0, 1, 0},
    {0, 0, 0, 1}
}; // Represents a 90-degree rotation around the Z-axis
t_quat rotationQuat = ft_quat_from_mat4(rotationMatrix);
// rotationQuat will now represent the same rotation as the matrix
***

### Notes:
- This function assumes that the input matrix is a pure rotation matrix and does not handle cases where the matrix includes scaling or translation.
- Care must be taken to ensure that the matrix is normalized if it has undergone operations that might affect its orthogonality or normalization.

## Related Documentation
- [t_quat](./t_quat.md) - Detailed documentation on the quaternion data structure and operations.
- [t_matrix4](../matrix/t_matrix4.md) - Documentation on the matrix used as input for this function.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
