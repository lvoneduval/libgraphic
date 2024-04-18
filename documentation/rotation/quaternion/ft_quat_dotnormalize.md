# ft_quat_dotnormalize
Normalizes a quaternion based on its scalar component `w`. This function is useful for adjusting quaternion components to a scale where `w` is one, which can be required in some graphics and physics calculations where quaternion's scalar part `w` should be a unitary basis.

### Parameters
- `t_quat q`: The quaternion to normalize.

### Function Details
The function scales all components of the quaternion (x, y, z, w) by the inverse of its `w` component, if `w` is non-zero. This normalization ensures that the scalar component `w` becomes one, thus scaling the vector components accordingly.

### Returns
- `t_quat`: The normalized quaternion with `w` scaled to one, unless `w` is zero, in which case the quaternion is returned as is.

### Example Usage
***c
t_quat quat = {2.0, 4.0, 4.0, 2.0};
t_quat normalizedQuat = ft_quat_dotnormalize(quat);
// normalizedQuat will be {1.0, 2.0, 2.0, 1.0}
***

### Notes:
- If `w` is zero, the function returns the original quaternion unchanged, as division by zero is undefined.
- This normalization can help maintain numerical stability in algorithms where `w` is assumed to be one.

## Related Documentation
- [t_quat](./t_quat.md) - Provides details on the quaternion structure and its operations.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
