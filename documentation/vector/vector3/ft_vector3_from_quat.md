# ft_vector3_from_quat
Converts a quaternion to a 3D vector by normalizing the quaternion's x, y, and z components by its scalar component (w). This operation is commonly used in graphics and physics to translate quaternion-based rotations into vector representations.

### Parameters
- `t_quat q`: The quaternion to convert into a vector.

### Function Details
This function extracts the directional components of a quaternion and normalizes them by the scalar part to form a 3D vector:
- **Conversion Formula**: 
  - `x = q.x / q.w`
  - `y = q.y / q.w`
  - `z = q.z / q.w`
This method effectively scales the imaginary parts of the quaternion (x, y, z) relative to its real part (w), assuming the quaternion is normalized.

### Returns
- `t_vector3`: The 3D vector derived from the quaternion's directional components.

### Example Usage
```c
t_quat rotationQuat = {0.0, 1.0, 0.0, 1.0};  // Example quaternion
t_vector3 directionVector = ft_vector3_from_quat(rotationQuat);
// directionVector will be {0.0, 1.0, 0.0}, representing the direction of the quaternion
```

### Notes:
- **Preconditions**: For accurate conversion, the quaternion should be normalized. If the quaternion is not normalized, the resulting vector might not accurately represent the intended direction.
- **Usage Contexts**: Often used in visualizations or when interfacing between systems that use quaternions for rotation and those that use vectors for directional data.

## Related Documentation
- [t_quat](../../rotation/quaternion/t_quat.md) - Detailed documentation on quaternion operations and properties.
- [t_vector3](./t_vector3.md) - Further details on the 3D vector structure and its usage.
- [vector-md](../vector-doc.md) - Provides details on the 2D vector structure and its operations.

### Return to the home page of the documentation
[Home](../../home.md)