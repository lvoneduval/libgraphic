# Spherical Rotation (t_sphrot) Documentation

This document provides a comprehensive overview of the `t_sphrot` structure, which is used to represent rotations in 3D space using spherical coordinates. These rotations are defined by latitude, longitude, and an additional rotation angle around the axis formed by these coordinates.

## Structure Definition

### t_sphrot
Defines a spherical rotation using three angular components:

- **`lat`: float** - Latitude angle in radians, often denoted as theta. Represents the angle down from the z-axis.
- **`lon`: float** - Longitude angle in radians, often denoted as phi. Represents the angle around the z-axis from the x-axis.
- **`angle`: float** - Rotation angle in radians around the axis defined by the latitude and longitude coordinates.

## Functions

### Conversion Functions
- **[ft_sphrot_from_eulerrot](./ft_sphrot_from_eulerrot.md)**
  - Converts Euler angles to a spherical rotation.
- **[ft_sphrot_from_aarot](./ft_sphrot_from_aarot.md)**
  - Converts an axis-angle rotation to a spherical rotation.
- **[ft_sphrot_from_mat4](./ft_sphrot_from_mat4.md)**
  - Derives a spherical rotation from a 4x4 transformation matrix.
- **[ft_sphrot_from_quat](./ft_sphrot_from_quat.md)**
  - Converts a quaternion to a spherical rotation.

## Usage Notes
Spherical rotations are particularly useful in systems where orientations are naturally expressed in spherical coordinates. They offer an intuitive understanding of rotation in terms of global directions (like latitude and longitude on a globe) and are essential in geospatial applications, astronomy, and 3D graphics for spherical environments.

### Return to the Home Page of the Documentation
[Home](../home.md)
