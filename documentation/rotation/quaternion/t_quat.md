# Quaternion Rotation (t_quat) Documentation

This document provides an overview of the `t_quat` structure used to represent rotations in 3D space using quaternions. Quaternions are a mathematical concept that extends complex numbers and provides a robust way to encode and compute rotations avoiding gimbal lock and ensuring smooth interpolations.

## Structure Definition

### t_quat
Defines a quaternion used for representing and computing 3D rotations.

- **`x`: float** - The x component of the quaternion.
- **`y`: float** - The y component of the quaternion.
- **`z`: float** - The z component of the quaternion.
- **`w`: float** - The scalar component of the quaternion.

## Functions

### Quaternion Constructors
- **[ft_quat_new](./ft_quat_new.md)**
  - Initializes a new quaternion with specified components.
- **[ft_quat_from_aarot](./ft_quat_from_aarot.md)**
  - Converts an axis-angle rotation to a quaternion.
- **[ft_quat_from_eulerrot](./ft_quat_from_eulerrot.md)**
  - Converts Euler angles to a quaternion.
- **[ft_quat_from_mat4](./ft_quat_from_mat4.md)**
  - Converts a 4x4 matrix to a quaternion.
- **[ft_quat_from_sphrot](./ft_quat_from_sphrot.md)**
  - Converts spherical rotation coordinates to a quaternion.
- **[ft_quat_from_vector3](./ft_quat_from_vector3.md)**
  - Creates a quaternion from a vector and a scalar.

### Quaternion Operations
- **[ft_quat_add](./ft_quat_add.md)**
  - Adds two quaternions.
- **[ft_quat_sub](./ft_quat_sub.md)**
  - Subtracts one quaternion from another.
- **[ft_quat_mul](./ft_quat_mul.md)**
  - Multiplies two quaternions.
- **[ft_quat_scale](./ft_quat_scale.md)**
  - Scales a quaternion by a scalar.
- **[ft_quat_inv](./ft_quat_inv.md)**
  - Computes the inverse of a quaternion.
- **[ft_quat_opp](./ft_quat_opp.md), [ft_quat_neg](./ft_quat_neg.md)**
  - Computes the opposite or negation of a quaternion.
- **[ft_quat_normalize](./ft_quat_normalize.md)**
  - Normalizes a quaternion.
- **[ft_quat_magn](./ft_quat_magn.md)**
  - Computes the magnitude of a quaternion.
- **[ft_quat_crossprod](./ft_quat_crossprod.md), [ft_quat_dotprod](./ft_quat_dotprod.md)**
  - Performs cross and dot products on quaternions.
- **[ft_quat_lerp](./ft_quat_lerp.md), [ft_quat_slerp](./ft_quat_slerp.md)**
  - Performs linear and spherical linear interpolations between quaternions.

## Usage Notes
Quaternions are particularly favored in computer graphics and robotics for their computational efficiency and robustness in handling rotations. They are immune to the gimbal lock problem and provide smooth interpolations necessary for animation.

### Return to the Home Page of the Documentation
[Home](../../home.md)
