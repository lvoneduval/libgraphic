# Euler Angle Rotation (t_eulerrot) Documentation

This document provides an overview of the `t_eulerrot` structure, which is used to represent rotations in 3D space using Euler angles. Euler angles specify rotations sequentially around the three principal axes (X, Y, and Z).

## Structure Definition

### t_eulerrot
Defines a rotation using Euler angles, where each angle represents a rotation around one of the three principal axes.

- **`x`: float** - Rotation around the X-axis in radians.
- **`y`: float** - Rotation around the Y-axis in radians.
- **`z`: float** - Rotation around the Z-axis in radians.

## Functions

### Creation and Conversion Functions
#### New Euler Rotation
- [ft_eulerrot_new](./ft_eulerrot_new.md)
  - Creates a new `t_eulerrot` with specified rotations around the X, Y, and Z axes.

#### Conversion from Axis-Angle
- [ft_eulerrot_from_aarot](./ft_eulerrot_from_aarot.md)
  - Converts an axis-angle rotation to Euler angles.

#### Conversion from Matrix
- [ft_eulerrot_from_mat4](./ft_eulerrot_from_mat4.md)
  - Derives Euler angles from a 4x4 transformation matrix.

#### Conversion from Quaternion
- [ft_eulerrot_from_quat](./ft_eulerrot_from_quat.md)
  - Converts a quaternion to Euler angles.

#### Conversion from Spherical Rotation
- [ft_eulerrot_from_sphrot](./ft_eulerrot_from_sphrot.md)
  - Converts spherical rotation coordinates to Euler angles.

### Operations Functions
#### Add Euler Rotations
- [ft_eulerrot_add](./ft_eulerrot_add.md)
  - Adds two Euler rotations together.

#### Subtract Euler Rotations
- [ft_eulerrot_sub](./ft_eulerrot_sub.md)
  - Subtracts one Euler rotation from another.

#### Check Equality with Tolerance
- [ft_eulerrot_equal](./ft_eulerrot_equal.md)
  - Compares two Euler rotations for equality within a specified tolerance.

#### Linear Interpolation between Euler Rotations
- [ft_eulerrot_lerp](./ft_eulerrot_lerp.md)
  - Performs linear interpolation between two Euler rotations.

## Usage Notes
Euler angles are widely used due to their intuitive interpretation but can be prone to gimbal lock. They are particularly useful in applications where the separate stages of rotation need to be easily understood or adjusted independently.

### Return to the Home Page of the Documentation
[Home](../../home.md)
