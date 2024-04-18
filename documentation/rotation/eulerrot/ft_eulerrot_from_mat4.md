# ft_eulerrot_from_mat4
Converts a 4x4 transformation matrix to Euler angles, using a quaternion as an intermediate step to ensure stability and accuracy of the conversion.

### Parameters
- `t_matrix4 mat`: The transformation matrix from which Euler angles are to be derived. This matrix should represent a rotation for accurate results.

### Function Details
This function handles the conversion through two primary transformations:
1. **Quaternion Conversion**: The transformation matrix is first converted into a quaternion. This step helps in mitigating issues like gimbal lock that are common with Euler angles, especially around the singularities.
2. **Euler Conversion**: The quaternion is then converted into Euler angles. This final conversion yields the roll, pitch, and yaw angles which represent rotations around the X, Y, and Z axes, respectively.

### Returns
- `t_eulerrot`: The Euler angles derived from the transformation matrix. These angles represent the rotation in terms of roll (x), pitch (y), and yaw (z).

### Example Usage
***c
t_matrix4 rotationMatrix = {
    {0, -1, 0, 0},
    {1, 0, 0, 0},
    {0, 0, 1, 0},
    {0, 0, 0, 1}
};  // Matrix representing 90 degrees rotation around Z-axis
t_eulerrot eulerAngles = ft_eulerrot_from_mat4(rotationMatrix);
// eulerAngles will be {0, 0, M_PI/2}, assuming the convention that Z rotation is yaw
***

### Notes:
- This conversion process ensures that the Euler angles are as stable as possible across the function's range. However, Euler angles can still suffer from gimbal lock in some cases, especially if the rotation matrix approaches certain critical orientations.
- The function assumes that the matrix represents only rotation (no skew or scale) for accurate conversion.

## Related Documentation
- [t_matrix4](../../matrix/matrix4/t_matrix4.md) - Documentation on the 4x4 matrix used in this function.
- [t_quat](../quaternion//t_quat.md) - Intermediate quaternion representation used for the conversion.
- [t_eulerrot](./t_eulerrot.md) - Detailed documentation on the Euler angles structure returned by this function.
- [rotation-doc](../rotation-doc.md) - Overview of different types of rotation representations.

### Return to the home page of the documentation
[Home](../../home.md)
