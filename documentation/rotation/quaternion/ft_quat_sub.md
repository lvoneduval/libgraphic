# ft_quat_sub
Subtracts one quaternion from another, component-wise, to compute the difference in their orientation and rotation magnitude.

### Parameters
- `t_quat q1`: The first quaternion.
- `t_quat q2`: The second quaternion to subtract from the first.

### Function Details
This function calculates the difference between two quaternions by subtracting each corresponding component:
- **X Component**: Difference in the x-axis component of the quaternion.
- **Y Component**: Difference in the y-axis component.
- **Z Component**: Difference in the z-axis component.
- **W Component**: Difference in the scalar component, which affects the angle of rotation.

### Returns
- `t_quat`: The resulting quaternion after subtraction. This quaternion represents the difference in rotation and orientation between the first and second quaternion.

### Example Usage
```c
t_quat quaternion1 = {1.0, 0.5, 0.5, 0.75};
t_quat quaternion2 = {0.5, 0.25, 0.25, 0.5};
t_quat result = ft_quat_sub(quaternion1, quaternion2);
// result will be {0.5, 0.25, 0.25, 0.25}
```

### Notes:
- Quaternion subtraction is not commonly used for combining rotations since the result may not represent a valid rotational quaternion. It is often used for differential purposes or error calculations in algorithms.
- It is recommended to normalize the resulting quaternion if it is to be used for further rotational purposes to ensure it represents a valid rotation.

## Related Documentation
- [t_quat](./t_quat.md) - Provides detailed information about the quaternion structure and its operations.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
