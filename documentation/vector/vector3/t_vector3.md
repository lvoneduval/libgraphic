# Vector3 Documentation

This document provides detailed information about the `t_vector3` structure and its associated functions for handling 3D vector operations. The `t_vector3` structure is crucial for various applications in graphics, physics, and general mathematics where 3D vectors are required.

## t_vector3 Structure
**Description**: Represents a three-dimensional vector with x, y, and z components.

- `x` - `float`: The horizontal component of the vector.
- `y` - `float`: The vertical component of the vector.
- `z` - `float`: The depth component of the vector.

## Functions

### Constructors
- [ft_vector3_new](./ft_vector3_new.md) - Creates a new vector with specified x, y, and z components.
- [ft_vector3_null](./ft_vector3_null.md) - Returns a vector with all components set to zero.
- [ft_vector3_from_quat](./ft_vector3_from_quat.md) - Converts a quaternion to a 3D vector representing the same spatial orientation.

#### Vector Arithmetic
- [ft_vector3_add](./ft_vector3_add.md) - Adds two vectors.
- [ft_vector3_sub](./ft_vector3_sub.md) - Subtracts one vector from another.
- [ft_vector3_scale](./ft_vector3_scale.md) - Scales a vector by a scalar value.
- [ft_vector3_opp](./ft_vector3_opp.md) - Computes the opposite of a vector.

#### Advanced Vector Operations
- [ft_vector3_crossprod](./ft_vector3_crossprod.md) - Calculates the cross product of two vectors, resulting in a vector perpendicular to both.
- [ft_vector3_normalize](./ft_vector3_normalize.md) - Normalizes the vector to a unit length.

### Scalar Operations and Properties
- [ft_vector3_dotprod](./ft_vector3_dotprod.md) - Computes the dot product of two vectors, which indicates the cosine of the angle between them and can be used to determine vector alignment.
- [ft_vector3_magn](./ft_vector3_magn.md) - Returns the magnitude (length) of a vector.
- [ft_vector3_equal](./ft_vector3_equal.md) - Checks if two vectors are equal by comparing their components.

### Notes:
- **Precision and Performance**: Operations involving 3D vectors must consider floating-point precision and performance, especially in graphics and physics simulations where accuracy and efficiency are critical.
- **Usage in 3D Space**: 3D vectors are fundamental in describing positions, directions, and forces in three-dimensional space, making them integral to 3D modeling, animation, and physics calculations.

## Related Documentation 
- [vector-doc](../vector-doc.md)

### Return to the Home Page of the Documentation
[Home](../../home.md)
