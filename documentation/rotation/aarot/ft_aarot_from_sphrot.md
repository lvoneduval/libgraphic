# ft_aarot_from_sphrot
Converts a spherical rotation into an axis-angle rotation, utilizing spherical coordinates to define the rotation axis and angle.

### Parameters
- `t_sphrot sphrot`: The spherical rotation to convert. This structure contains latitude (`lat`), longitude (`lon`), and a rotation angle (`angle`).

### Function Details
This function constructs an axis-angle rotation where:
1. **Axis Calculation**: The axis of rotation is computed using spherical coordinates:
   - `x` is calculated as `cos(lat) * sin(lon)`.
   - `y` is calculated as `sin(lat)`.
   - `z` is calculated as `cos(lat) * cos(lon)`.
   These formulas convert the latitude and longitude into Cartesian coordinates which represent the axis of rotation in 3D space.
2. **Angle Assignment**: The angle of rotation (`angle`) from the spherical rotation is directly used as the angle in the axis-angle representation.

### Returns
- `t_aarot`: The resulting axis-angle rotation that represents the same rotation as the input spherical rotation but in a different format. The structure will include:
  - `x`, `y`, `z` - components of the rotation axis
  - `angle` - the rotation angle in radians

### Example Usage
```c
t_sphrot sphrot = {M_PI/4, M_PI/2, M_PI/2}; // Spherical rotation with specific latitude and longitude
t_aarot aarot = ft_aarot_from_sphrot(sphrot);
// aarot will represent a rotation around the axis (0.707, 0.707, 0) with an angle of pi/2 radians
```

### Notes:
- This conversion is useful for transforming spherical coordinate-based rotations into a format that is commonly used for animation and physics calculations in 3D graphics and game development.
- The axis calculated from latitude and longitude should naturally form a unit vector due to the properties of sine and cosine used in the calculations.

## Related Documentation
- [t_sphrot](../sphrot/t_sphrot.md) - Documentation on the spherical rotation structure used in this function.
- [t_aarot](../aarot//t_aarot.md) - Detailed documentation on the axis-angle rotation structure being returned.
- [rotation-doc](../rotation-doc.md) - Overview of different types of rotation representations.

### Return to the home page of the documentation
[Home](../../home.md)
