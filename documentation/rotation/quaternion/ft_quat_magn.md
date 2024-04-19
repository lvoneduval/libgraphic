# ft_quat_magn
Calculates the magnitude (or norm) of a quaternion. The magnitude of a quaternion is a measure of its length from the origin in four-dimensional space.

### Parameters
- `t_quat q`: The quaternion for which the magnitude is to be calculated.

### Function Details
The magnitude is calculated using the Euclidean norm formula, which is the square root of the sum of the squares of all the components (scalar and vector parts):
- **Formula**: \(\sqrt{w^2 + x^2 + y^2 + z^2}\)

### Returns
- `float`: The magnitude of the quaternion. It represents the length of the quaternion vector in four-dimensional space.

### Example Usage
```c
t_quat quat = {1, 0, 1, 0}; // Example quaternion
float magnitude = ft_quat_magn(quat);
// magnitude will calculate to sqrt(2), which is approximately 1.414
```

### Notes:
- The magnitude of a unit quaternion (used to represent rotations) is 1. Non-unit quaternions might represent scaling and rotation in quaternion-based graphics or physics calculations.
- Knowing the magnitude is essential for normalizing quaternions, as only unit quaternions should be used to represent pure rotations.

## Related Documentation
- [t_quat](./t_quat.md) - Provides detailed information about the quaternion structure and its operations.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
