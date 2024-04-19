# Axis-Angle Rotation (t_aarot) Documentation

This document details the `t_aarot` structure used to represent axis-angle rotations, which specify a rotation in 3D space using an axis and an angle.

## Structure Definition

### t_aarot
Defines a rotation around an arbitrary axis using the axis-angle method.

- **`x`: float** - The x-component of the axis of rotation.
- **`y`: float** - The y-component of the axis of rotation.
- **`z`: float** - The z-component of the axis of rotation.
- **`angle`: float** - The rotation angle in radians.

## Functions

### Creation and Conversion Functions
#### New Axis-Angle Rotation
- [ft_aarot_new](./ft_aarot_new.md)
  - Initializes a new `t_aarot` with specified axis components and rotation angle.

#### Conversion from Spherical Rotation
- [ft_aarot_from_sphrot](./ft_aarot_from_sphrot.md)
  - Converts a spherical rotation to an axis-angle rotation.

#### Conversion from Matrix
- [ft_aarot_from_mat4](./ft_aarot_from_mat4.md)
  - Derives an axis-angle rotation from a 4x4 matrix representation.

#### Conversion from Euler Angles
- [ft_aarot_from_eulerrot](./ft_aarot_from_eulerrot.md)
  - Converts Euler angles to an axis-angle rotation.

#### Conversion from Quaternion
- [ft_aarot_from_quat](./ft_aarot_from_quat.md)
  - Converts a quaternion to an axis-angle rotation.

### Utility Functions
#### Normalize Axis-Angle Rotation
- [ft_aarot_normalize](./ft_aarot_normalize.md)
  - Normalizes the axis of an axis-angle rotation to ensure it is a unit vector.

## Usage Notes
Axis-angle rotations are especially useful for interpolating rotations and are often preferred in applications requiring a clear rotational axis and angle. It is crucial that the axis is normalized to maintain consistent rotational behavior.

### Return to the Home Page of the Documentation
[Home](../../home.md)
