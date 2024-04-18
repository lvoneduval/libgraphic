# Vector2 Documentation

This document provides detailed information about the `t_vector2` structure and its associated functions for handling 2D vector operations. The `t_vector2` structure is crucial for various applications in graphics, physics, and general mathematics where 2D vectors are required.

## t_vector2 Structure
**Description**: Represents a two-dimensional vector with x and y components.

- `x` - `float`: The horizontal component of the vector.
- `y` - `float`: The vertical component of the vector.

## Functions

### Creation and Basic Operations
- [ft_vector2_new](./ft_vector2_new.md) - Creates a new vector with specified x and y components.
- [ft_vector2_null](./ft_vector2_null.md) - Returns a vector with all components set to zero.
- [ft_vector2_add](./ft_vector2_add.md) - Adds two vectors.
- [ft_vector2_sub](./ft_vector2_sub.md) - Subtracts one vector from another.
- [ft_vector2_scale](./ft_vector2_scale.md) - Scales a vector by a scalar value.
- [ft_vector2_opp](./ft_vector2_opp.md) - Computes the opposite of a vector.

### Advanced Vector Operations
- [ft_vector2_det](./ft_vector2_det.md) - Calculates the determinant of two vectors, useful for understanding vector orientation.
- [ft_vector2_dotprod](./ft_vector2_dotprod.md) - Computes the dot product of two vectors, which indicates the cosine of the angle between them.
- [ft_vector2_magn](./ft_vector2_magn.md) - Returns the magnitude (length) of a vector.
- [ft_vector2_normalize](./ft_vector2_normalize.md) - Normalizes the vector to a unit length.
- [ft_vector2_equal](./ft_vector2_equal.md) - Checks if two vectors are equal by comparing their components.

### Notes:
- **Precision**: When dealing with floating-point operations, small numerical errors can occur. Always consider precision when performing comparisons or other sensitive calculations.
- **Performance**: These functions are designed to be efficient and suitable for high-performance applications requiring extensive vector calculations.

## Related Documentation 
- [vector-doc](../vector-doc.md)

### Return to the Home Page of the Documentation
[Home](../home.md)
