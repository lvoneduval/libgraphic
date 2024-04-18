
# ft_vector2_opp
Calculates the opposite of a 2D vector. This function negates both components of the vector, effectively reversing its direction.

### Parameters
- `t_vector2 v`: The vector to be negated.

### Function Details
This function negates the x and y components of vector `v`:
- **Negation of Components**: 
  - `-(v.x)`: Negates the x-component.
  - `-(v.y)`: Negates the y-component.

### Returns
- `t_vector2`: The vector that represents the opposite direction of the input vector `v`.

### Example Usage
```c
t_vector2 velocity = {4.0, 10.0};
t_vector2 oppositeVelocity = ft_vector2_opp(velocity);
// oppositeVelocity will be {-4.0, -10.0}, pointing in the opposite direction
```

### Notes:
- **Utility**: Commonly used in physics and graphics to reverse motion or direction. It is also used in vector subtraction operations or when the direction of a vector needs to be inverted for calculation purposes.
- **Simple Operation**: Despite its simplicity, negating a vector is a critical operation in many vector calculations and can significantly affect the behavior of algorithms that involve vector manipulations.

## Related Documentation
- [t_vector2](./t_vector2.md) - Provides details on the 2D vector structure and its operations.
- [vector-md](../vector-doc.md) - Provides details on the 2D vector structure and its operations.

### Return to the home page of the documentation
[Home](../../home.md)