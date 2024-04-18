# ft_eulerrot_sub
Subtracts one set of Euler angles from another, providing the angular difference in each axis.

### Parameters
- `t_eulerrot a`: The first set of Euler angles.
- `t_eulerrot b`: The second set of Euler angles from which to subtract.

### Function Details
This function computes the difference between two Euler angles:
- **X-axis (Roll)**: Difference in rotation about the X-axis.
- **Y-axis (Pitch)**: Difference in rotation about the Y-axis.
- **Z-axis (Yaw)**: Difference in rotation about the Z-axis.

### Returns
- `t_eulerrot`: The result of the subtraction, indicating the difference in Euler angles between the two inputs.

### Example Usage
***c
t_eulerrot euler1 = {M_PI, 0, M_PI/2};
t_eulerrot euler2 = {M_PI/2, M_PI/4, M_PI/4};
t_eulerrot difference = ft_eulerrot_sub(euler1, euler2);
// difference will be {M_PI/2, -M_PI/4, M_PI/4}
***

### Notes:
- This function is useful in scenarios where the relative rotation between two orientations needs to be determined.
- Care should be taken when interpreting the results, as subtracting Euler angles does not always yield intuitive or physically meaningful results due to the non-commutative nature of rotations.

## Related Documentation
- [t_eulerrot](./t_eulerrot.md) - Detailed documentation on the Euler angles structure.
- [rotation-doc](../rotation-doc.md) - Overview of different types of rotation representations and their mathematical operations.

### Return to the home page of the documentation
[Home](../../home.md)
