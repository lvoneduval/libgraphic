# ft_aarot_new
Creates a new axis-angle rotation with specified axis coordinates and rotation angle.

### Parameters
- `float x`: X component of the rotation axis.
- `float y`: Y component of the rotation axis.
- `float z`: Z component of the rotation axis.
- `float angle`: The rotation angle in radians around the specified axis.

### Function Details
This function initializes an axis-angle rotation structure:
- **Axis Components**: Sets the x, y, and z fields of the `t_aarot` structure to the provided values, representing the axis of rotation.
- **Angle**: Sets the `angle` field of the structure to the specified rotation angle in radians.

### Returns
- `t_aarot`: An axis-angle rotation initialized with the specified axis and angle.

### Example Usage
```c
// Create an axis-angle rotation for 90 degrees around the Z-axis
t_aarot rotation = ft_aarot_new(0.0, 0.0, 1.0, M_PI / 2);
// rotation now represents a 90-degree rotation around the Z-axis
```

### Notes:
- The function does not normalize the input axis, so the caller must ensure that the axis is a unit vector if that property is required for subsequent calculations.
- The rotation angle should be provided in radians, which is the standard unit of angular measurement in mathematical functions.

## Related Documentation
- [t_aarot](./t_aarot.md) - Detailed documentation on the axis-angle rotation structure used in this function.
- [rotation-doc](../rotation-doc.md) - Overview of different types of rotation representations.

### Return to the home page of the documentation
[Home](../../home.md)
