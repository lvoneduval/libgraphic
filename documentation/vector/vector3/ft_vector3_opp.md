# ft_vector3_opp
Calculates the opposite of a 3D vector. This function negates each component of the vector, effectively reversing its direction. This is crucial in many applications where the opposite direction is needed for computations, such as reversing motion vectors in simulations or inverting normal vectors in graphics.

### Parameters
- `t_vector3 v`: The vector to be negated.

### Function Details
This function negates each component of vector `v`:
- **X Component**: `-(v.x)` - Negates the x-component.
- **Y Component**: `-(v.y)` - Negates the y-component.
- **Z Component**: `-(v.z)` - Negates the z-component.

### Returns
- `t_vector3`: The vector that represents the opposite direction of the input vector `v`.

### Example Usage
```c
t_vector3 velocity = {4.0, 10.0, 2.0};
t_vector3 oppositeVelocity = ft_vector3_opp(velocity);
// oppositeVelocity will be {-4.0, -10.0, -2.0}, pointing in the opposite direction
```

### Notes:
- **Utility**: Commonly used in physics and graphics to reverse motion or direction. It is also used in vector subtraction operations or when the direction of a vector needs to be inverted for calculation purposes.
- **Simple Operation**: Despite its simplicity, negating a vector is a critical operation in many vector calculations and can significantly affect the behavior of algorithms that involve vector manipulations.

## Related Documentation
- [t_vector3](./t_vector3.md) - Provides details on the 2D vector structure and its operations.
- [vector-md](../vector-doc.md) - Provides details on the 2D vector structure and its operations.

### Return to the home page of the documentation
[Home](../../home.md)
