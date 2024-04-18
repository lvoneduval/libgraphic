# ft_quat_from_sphrot
Converts spherical rotation parameters into a quaternion. This method is useful for creating quaternion representations from spherical coordinates, which describe rotations around an axis defined by latitude and longitude.

### Parameters
- `t_sphrot rot`: The spherical rotation parameters containing latitude (lat), longitude (lon), and the rotation angle.

### Function Details
The conversion process involves:
- **Angle Halving**: The rotation angle is halved, reflecting the quaternion representation of rotations.
- **Trigonometric Calculations**: Sine and cosine functions are used to compute the components based on the halved angle and the spherical coordinates:
  - **x Component**: Calculated as \( \sin(\text{angle}/2) \times \cos(\text{lat}) \times \sin(\text{lon}) \).
  - **y Component**: Calculated as \( \sin(\text{angle}/2) \times \sin(\text{lat}) \).
  - **z Component**: Calculated as \( \sin(\text{angle}/2) \times \sin(\text{lat}) \times \cos(\text{lon}) \).
  - **w Component**: The real part, calculated as \( \cos(\text{angle}/2) \).

### Returns
- `t_quat`: The quaternion representing the rotation specified by the input spherical coordinates.

### Example Usage
***c
t_sphrot sphericalRot = {M_PI / 4, M_PI / 2, M_PI};  // Example spherical coordinates
t_quat quaternion = ft_quat_from_sphrot(sphericalRot);
// quaternion will represent the rotation around the axis defined by the spherical coordinates
***

### Notes:
- This function provides a direct way to convert spherical coordinates to quaternions, which is particularly useful in graphics and physics simulations where rotations are needed.
- Ensure that the input angles are in radians for correct computations.

## Related Documentation
- [t_sphrot](../sphrot/t_sphrot.md) - Documentation on the spherical rotation structure used in this function.
- [t_quat](./t_quat.md) - Provides detailed information about the quaternion structure and its operations.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
