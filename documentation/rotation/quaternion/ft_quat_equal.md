# ft_quat_equal
Determines if two quaternions are equal by comparing their components. This function is useful in scenarios where the exact equality of two rotations needs to be asserted, often in unit tests or within state comparison checks.

### Parameters
- `t_quat q1`: The first quaternion to compare.
- `t_quat q2`: The second quaternion to compare.

### Function Details
The function checks each component of the quaternions:
- **Real Part (w)**: Compares the scalar component of both quaternions.
- **Imaginary Parts (x, y, z)**: Compares the vector components of both quaternions.

If all corresponding components are equal, the quaternions are considered equal.

### Returns
- `int`: Returns 1 if the quaternions are equal, otherwise returns 0.

### Example Usage
***c
t_quat quat1 = {1.0, 0.0, 0.0, 0.0};
t_quat quat2 = {1.0, 0.0, 0.0, 0.0};
int isEqual = ft_quat_equal(quat1, quat2);
// isEqual will be 1 because quat1 and quat2 are equal
***

### Notes:
- This comparison is exact; even minor differences in floating-point values will result in quaternions being considered unequal.
- Consider using a tolerance-based comparison for practical scenarios where floating-point precision might introduce tiny discrepancies.

## Related Documentation
- [t_quat](./t_quat.md) - Provides details on the quaternion structure and its operations.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
