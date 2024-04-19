# ft_quat_from_vector3
Constructs a quaternion from a three-dimensional vector and a scalar value. This function is typically used when converting three-dimensional transformations or rotations into quaternion form.

### Parameters
- `t_vector3 v`: The vector component of the quaternion, representing the x, y, and z values.
- `float w`: The scalar component of the quaternion.

### Function Details
This function directly assigns the x, y, and z components of the input vector `v` to the corresponding components of the quaternion. The scalar component `w` is also directly assigned to the quaternion's w component. The resulting quaternion is:
\[ \text{Quaternion} = (w, v.x, v.y, v.z) \]

### Returns
- `t_quat`: The quaternion formed by the given vector and scalar.

### Example Usage
```c
t_vector3 v = {1.0, 2.0, 3.0}; // Example vector
float scalar = 1.0;
t_quat quaternion = ft_quat_from_vector3(v, scalar);
// quaternion will have components w = 1.0, x = 1.0, y = 2.0, z = 3.0
```

### Notes:
- This function is useful for integrating vector and scalar data into a single quaternion structure, particularly in graphics and physics computations where rotations and orientations are handled.

## Related Documentation
- [t_vector3](../../vector/vector3/t_vector3.md) - Detailed information about the 3D vector structure.
- [t_quat](./t_quat.md) - Provides detailed information about the quaternion structure and its operations.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
