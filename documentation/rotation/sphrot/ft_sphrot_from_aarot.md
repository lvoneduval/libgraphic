# ft_sphrot_from_aarot
Converts an axis-angle rotation representation into a spherical rotation representation. This transformation allows converting a 3D rotational axis and an angle into latitude, longitude, and rotational angle around the axis.

### Parameters
- `t_aarot aarot`: The axis-angle rotation to be converted.

### Function Details
The function first normalizes the axis components of the `aarot` to ensure they represent a unit vector, from which the latitude and longitude can be derived. The latitude (`lat`) is calculated as the arcsine of the Y component, representing the angle above the equatorial plane. The longitude (`lon`) is calculated from the X and Z components, representing the rotational angle around the vertical axis. The `angle` from the `aarot` struct is directly used as the rotation angle in the spherical representation.

### Returns
- `t_sphrot`: The spherical rotation structure representing the same rotation as the given axis-angle structure.

### Example Usage
```c
t_aarot aarot = {x: 0.0, y: 1.0, z: 0.0, angle: M_PI / 2};
t_sphrot sphrot = ft_sphrot_from_aarot(aarot);
// sphrot will have lat = M_PI / 2, lon = 0, angle = M_PI / 2
```

### Notes:
- This function is particularly useful in converting rotations for systems or formulas that utilize spherical coordinates for rotation representation.
- The normalization step ensures that the input rotation axis is a unit vector, which is necessary for accurate computation of latitude and longitude.

## Related Documentation
- [t_aarot](../aarot//t_aarot.md) - Documentation for the axis-angle rotation structure and related functions.
- [t_sphrot](./t_sphrot.md) - Documentation on the spherical rotation structure used in this function.
- [rotation-doc](../rotation-doc.md) - Comprehensive documentation on rotation types and operations.

### Return to the home page of the documentation
[Home](../../home.md)
