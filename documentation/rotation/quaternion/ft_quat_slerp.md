# ft_quat_slerp
Performs spherical linear interpolation between two quaternions, a method often used in animations to interpolate between rotational states smoothly.

### Parameters
- `t_quat a`: The starting quaternion.
- `t_quat b`: The ending quaternion.
- `float alpha`: The interpolation factor between 0.0 (start) and 1.0 (end).

### Function Details
This function computes a smooth transition from quaternion `a` to quaternion `b` using the interpolation parameter `alpha`:
- **Dot Product**: First, it computes the cosine of the angle between the two quaternions using a dot product.
- **Handling Acute Angles**: If the dot product is negative, quaternion `a` is negated to ensure the shortest path of interpolation.
- **Linear Interpolation for Near Identity Quaternions**: For angles very close to 0, where the angle cosine is above 0.9995, linear interpolation is used as a more stable approximation.
- **Spherical Interpolation for Other Cases**: For the general case, the function calculates the actual SLERP which involves trigonometric functions to interpolate smoothly based on the spherical geometry.

### Returns
- `t_quat`: The interpolated quaternion which combines aspects of both input quaternions according to `alpha`.

### Example Usage
```c
t_quat quatStart = {1.0, 0.0, 0.0, 0.0};
t_quat quatEnd = {0.0, 1.0, 0.0, 0.0};
float interpolation = 0.5;
t_quat resultQuat = ft_quat_slerp(quatStart, quatEnd, interpolation);
// resultQuat should represent a 45-degree rotation between the two quaternions.
```

### Notes:
- It is crucial for both quaternions to be normalized before using this function, as SLERP assumes both inputs describe valid rotations.
- The method ensures continuity and a constant speed of motion along the interpolation path.

## Related Documentation
- [t_quat](./t_quat.md) - Provides detailed information about the quaternion structure and its operations.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
