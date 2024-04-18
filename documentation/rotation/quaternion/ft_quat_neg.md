# ft_quat_neg
Negates all components of a quaternion, effectively reflecting it through the origin in four-dimensional space. This operation changes the sign of both the scalar and vector components.

### Parameters
- `t_quat q`: The quaternion to be negated.

### Function Details
This function inverts the sign of every component (w, x, y, z) of the quaternion:
- **W Component**: The scalar part is negated.
- **X, Y, Z Components**: Each component of the vector part is negated.

### Returns
- `t_quat`: The negated quaternion, which is geometrically equivalent to the original quaternion but with all components having opposite signs.

### Example Usage
***c
t_quat originalQuat = {1.0, 2.0, 3.0, 4.0}; // Example quaternion
t_quat negatedQuat = ft_quat_neg(originalQuat);
// negatedQuat will be {-1.0, -2.0, -3.0, -4.0}
***

### Notes:
- Negating a quaternion does not change its ability to represent a rotation but does invert its orientation.
- This operation is useful in scenarios where the inverse orientation of a quaternion is needed, such as inverting rotation directions.

## Related Documentation
- [t_quat](./t_quat.md) - Provides detailed information about the quaternion structure and its operations.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
