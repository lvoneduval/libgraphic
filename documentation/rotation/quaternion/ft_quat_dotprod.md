# ft_quat_dotprod
Calculates the dot product of two quaternions. This function is significant in evaluating the angle between two quaternions or determining how similar they are, which is useful in interpolations and rotation blending.

### Parameters
- `t_quat q1`: The first quaternion.
- `t_quat q2`: The second quaternion.

### Function Details
The dot product is computed by summing the products of the corresponding components of the quaternions:
- **Real Part (w)**: Multiplied together from both quaternions.
- **Imaginary Parts (x, y, z)**: Multiplied together respectively and added to the real part's product.

The result is a scalar value representing the cosine of the angle between the two quaternion orientations in four-dimensional space.

### Returns
- `float`: The scalar result of the dot product. It ranges from -1 to 1, where 1 means the quaternions are identical, -1 means they are opposite, and 0 indicates orthogonality.

### Example Usage
***c
t_quat quat1 = {1.0, 0.0, 0.0, 0.0};
t_quat quat2 = {0.0, 1.0, 0.0, 0.0};
float dotProduct = ft_quat_dotprod(quat1, quat2);
// dotProduct will be 0.0, indicating orthogonality
***

### Notes:
- This function is often used in the normalization process and to determine quaternion interpolation parameters.

## Related Documentation
- [t_quat](./t_quat.md) - Detailed information about the quaternion structure and its operations.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
