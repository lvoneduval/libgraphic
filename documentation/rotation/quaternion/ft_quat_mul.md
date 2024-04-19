# ft_quat_mul
Multiplies two quaternions to combine their rotational transformations. Quaternion multiplication is non-commutative, meaning the order of multiplication affects the result.

### Parameters
- `t_quat q1`: The first quaternion.
- `t_quat q2`: The second quaternion.

### Function Details
Quaternion multiplication combines the effects of the rotations represented by two quaternions:
- **Scalar Component Calculation**: The new scalar component (w) is calculated as the difference of the product of scalar parts and the dot product of the vector parts.
- **Vector Component Calculation**: The new vector components (x, y, z) are calculated using a cross-product-like operation with additional components involving the scalar values.

### Returns
- `t_quat`: The quaternion resulting from the multiplication, representing the combined rotation of `q1` followed by `q2`.

### Example Usage
```c
t_quat quatA = {1, 0, 1, 0}; // Quaternion representing a specific rotation
t_quat quatB = {0, 1, 0, 1}; // Another quaternion representing a different rotation
t_quat resultQuat = ft_quat_mul(quatA, quatB);
// resultQuat now represents the rotation of quatA followed by the rotation of quatB
```

### Notes:
- It's essential to note that quaternion multiplication is not commutative — the sequence in which quaternions are multiplied affects the final outcome.
- The resulting quaternion often needs to be normalized after multiplication, especially if the input quaternions are not unit quaternions, to maintain numerical stability and correct rotational semantics.

## Related Documentation
- [t_quat](./t_quat.md) - Provides detailed information about the quaternion structure and its operations.
- [rotation-doc](../rotation-doc.md) - Overview of different rotation representations and conversions.

### Return to the home page of the documentation
[Home](../../home.md)
