# ft_mat4_from_sphrot
Generates a 4x4 rotation matrix from spherical rotation parameters. This function is essential for creating rotations in 3D space derived from spherical coordinates, typically used in scenarios where rotation needs to be expressed in terms of latitude, longitude, and an angle.

### Parameters
- `t_sphrot sphrot`: A spherical rotation structure containing latitude (`lat`), longitude (`lon`), and rotation angle (`angle`).

### Function Details
This function calculates a rotation matrix based on spherical coordinates:
- **Coordinates Conversion**: Converts latitude and longitude to Cartesian coordinates to define the axis of rotation.
- **Rotation Matrix Calculation**: Uses the axis-angle formula to create a rotation matrix. The formula involves:
  - **Sine and Cosine Calculations**: Compute sine and cosine of the rotation angle.
  - **Component Calculations**: Compute matrix elements based on the Cartesian coordinates derived from spherical coordinates and the trigonometric results.

### Returns
- `t_matrix4`: The rotation matrix derived from the given spherical rotation parameters.

### Example Usage
```c
t_sphrot sphRotation = {M_PI/4, M_PI/4, M_PI/2}; // Spherical rotation with 45-degree latitude and longitude, and a 90-degree rotation angle
t_matrix4 rotationMatrix = ft_mat4_from_sphrot(sphRotation);
```

### Notes:
- **Sphere to Matrix Transformation**: The function effectively maps spherical coordinates onto a 3D rotation matrix, which can be challenging to visualize without understanding spherical geometry.
- **Applications**: This method is particularly useful in graphics programming for object orientation, camera rotations, and animating rotations around arbitrary axes defined by spherical coordinates.

## Related Documentation
- [t_matrix4](./t_matrix4.md)
- [matrix-doc](../matrix-doc.md)
- [t_sphrot](../../rotation/sphrot/t_sphrot.md) - Discusses the spherical rotation structure and its applications.

### Return to the home page of the documentation
[Home](../home.md)
