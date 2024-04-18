# ft_eulerrot_equal
Checks if two sets of Euler angles are approximately equal, considering a specified tolerance for each angle.

### Parameters
- `t_eulerrot a`: The first set of Euler angles to compare.
- `t_eulerrot b`: The second set of Euler angles to compare.
- `float tolerance`: The maximum allowed difference between corresponding angles for them to be considered equal.

### Function Details
This function compares the corresponding components (x, y, z representing rotations around the X, Y, and Z axes respectively) of two Euler rotations:
- **Comparison**: Each component of the Euler angles from two rotations is compared. The absolute difference between each corresponding component must be less than the specified `tolerance` for the rotations to be considered equal.

### Returns
- `int`: Returns 1 (true) if all corresponding components of `a` and `b` are within the specified `tolerance`, otherwise returns 0 (false).

### Example Usage
***c
t_eulerrot rot1 = {0.0, M_PI / 4, 0.0};
t_eulerrot rot2 = {0.0, M_PI / 3, 0.0};
int isEqual = ft_eulerrot_equal(rot1, rot2, 0.1);
// isEqual will be 0 (false) because the difference in the Y-axis rotation exceeds 0.1 radians
***

### Notes:
- This function is particularly useful in applications where small numerical differences between angles can be disregarded, such as in iterative algorithms or when validating the results of floating-point computations.
- Care should be taken with the choice of tolerance, as too large a tolerance could lead to incorrect assumptions of equality in sensitive applications.

## Related Documentation
- [t_eulerrot](./t_eulerrot.md) - Detailed documentation on the Euler rotation structure used in this function.
- [rotation-doc](../rotation-doc.md) - Overview of different types of rotation representations.

### Return to the home page of the documentation
[Home](../../home.md)
