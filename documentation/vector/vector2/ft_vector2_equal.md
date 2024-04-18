# ft_vector2_equal
Determines if two 2D vectors are exactly equal by comparing their x and y components. This function is useful for operations where precise vector equality is necessary to ensure geometric or computational integrity.

### Parameters
- `t_vector2 v1`: The first vector to compare.
- `t_vector2 v2`: The second vector to compare.

### Function Details
This function compares the components of two vectors:
- **Component Comparison**: It checks if both the x and y components of `v1` are equal to those of `v2`.
  - If both components match, the vectors are considered equal.
  - If any component does not match, the vectors are not equal.

### Returns
- `int`: Returns `1` if the vectors are equal, `0` otherwise.

### Example Usage
```c
t_vector2 vectorA = {3.0, 4.0};
t_vector2 vectorB = {3.0, 4.0};
int areEqual = ft_vector2_equal(vectorA, vectorB);
// areEqual will be 1, indicating that vectorA and vectorB are equal
```

### Notes:
- **Usage Considerations**: Exact equality checks are sensitive to floating-point precision issues. For applications involving floating-point calculations, consider using a tolerance for equality checks to avoid unexpected results.
- **Efficiency**: This function is optimized for quick comparison, useful in algorithms that require frequent vector equality checks, such as searching and sorting in geometric data structures.

## Related Documentation
- [t_vector2](./t_vector2.md) - Further details on the 2D vector structure and its usage.
- [vector-doc](../vector-doc.md)

### Return to the home page of the documentation
[Home](../../home.md)