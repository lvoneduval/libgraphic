# ft_eulerrot_add
Performs the addition of two sets of Euler angles, resulting in a new set of Euler angles that combines the rotational effects of both inputs.

### Parameters
- `t_eulerrot a`: The first set of Euler angles.
- `t_eulerrot b`: The second set of Euler angles.

### Function Details
This function adds the corresponding components of two Euler angle rotations:
- **X-Axis Rotation**: Adds the x components of `a` and `b`.
- **Y-Axis Rotation**: Adds the y components of `a` and `b`.
- **Z-Axis Rotation**: Adds the z components of `a` and `b`.

### Returns
- `t_eulerrot`: The resultant Euler angles after addition. This represents the cumulative rotation of `a` and `b`.

### Example Usage
```c
t_eulerrot rot1 = {M_PI / 4, M_PI / 6, M_PI / 8};
t_eulerrot rot2 = {M_PI / 4, M_PI / 6, M_PI / 8};
t_eulerrot combinedRotation = ft_eulerrot_add(rot1, rot2);
// combinedRotation will have {M_PI / 2, M_PI / 3, M_PI / 4}
```

### Notes:
- Euler angles are prone to gimbal lock and may not always represent 3D orientation intuitively when rotations become complex. Adding Euler angles linearly is straightforward but may not always provide expected results in 3D orientation due to these limitations.
- The function assumes simple addition of angles without normalization or adjustment for wrap-around effects beyond 2π (360 degrees).

## Related Documentation
- [t_eulerrot](./t_eulerrot.md) - Detailed documentation on the Euler rotation structure used in this function.
- [rotation-doc](../rotation-doc.md) - Overview of different types of rotation representations.

### Return to the home page of the documentation
[Home](../../home.md)
