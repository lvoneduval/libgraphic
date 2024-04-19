# ft_eulerrot_new
Creates a new `t_eulerrot` structure representing Euler angles for rotation about the X, Y, and Z axes.

### Parameters
- `float x`: Rotation angle around the X-axis in radians.
- `float y`: Rotation angle around the Y-axis in radians.
- `float z`: Rotation angle around the Z-axis in radians.

### Function Details
This function initializes a `t_eulerrot` structure with the specified rotations about each principal axis:
- **X-axis (Roll)**: Rotation around the X-axis.
- **Y-axis (Pitch)**: Rotation around the Y-axis.
- **Z-axis (Yaw)**: Rotation around the Z-axis.

### Returns
- `t_eulerrot`: A new Euler rotation object configured with the provided angles.

### Example Usage
```c
// Create a Euler rotation of 90 degrees around X, 45 degrees around Y, and 30 degrees around Z.
t_eulerrot rotation = ft_eulerrot_new(M_PI/2, M_PI/4, M_PI/6);
```

### Notes:
- Euler rotations are applied in the order of roll, pitch, and yaw. This function does not perform any normalization or adjustment on the input angles; it simply assigns them to the respective fields in the `t_eulerrot` structure.

## Related Documentation
- [t_eulerrot](./t_eulerrot.md) - Provides details on the structure and use of Euler angles in the system.
- [rotation-doc](../rotation-doc.md) - Overview of different types of rotation representations and their applications.

### Return to the home page of the documentation
[Home](../../home.md)
