# ft_quat_new
Creates a new quaternion from specified scalar and vector components. This function is fundamental for initializing quaternions in various applications, including 3D rotations and interpolations.

### Parameters
- `float x`: The x-component of the quaternion's vector part.
- `float y`: The y-component of the quaternion's vector part.
- `float z`: The z-component of the quaternion's vector part.
- `float w`: The scalar component of the quaternion.

### Function Details
This function directly assigns the provided values to the corresponding components of a new quaternion:
- **W Component**: Represents the real part of the quaternion.
- **X, Y, Z Components**: Represent the imaginary parts of the quaternion and define the axis of rotation.

### Returns
- `t_quat`: The newly created quaternion with the specified components.

### Example Usage
***c
// Create a quaternion representing a 180-degree rotation around the z-axis
t_quat quat = ft_quat_new(0.0, 0.0, 1.0, 0.0);
***

### Notes:
- The quaternion created by this function is not guaranteed to be normalized. Depending on the application, you may need to normalize the quaternion after creation to ensure proper rotation behavior.
- Quaternions are a robust alternative to Euler angles and rotation matrices, avoiding issues like gimbal lock and providing efficient computational properties for 3D transformations.

## Related Documentation
- [t_quat](./t_quat.md) - Provides detailed information about the quaternion structure and its operations.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
