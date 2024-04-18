# Rotation Documentation Overview

This document provides an overview and detailed explanations of different rotation representations used in 3D graphics, physics simulations, and other applications involving 3D transformations. Each rotation type offers unique advantages for specific scenarios, allowing for efficient and intuitive application in rotation calculations and animations.

## Structures

### t_aarot - Axis-Angle Rotation
- `x`, `y`, `z`: Components of the rotation axis.
- `angle`: Rotation angle around the axis in radians.
This structure is used to represent rotations around a defined axis in 3D space, useful in scenarios where rotations need to be applied in a straightforward and intuitive manner.
[t_aarot Details](./aarot/t_aarot.md) - Provides in-depth information about axis-angle rotation usage and functions.

### t_eulerrot - Euler Angles
- `x`: Rotation around the X-axis in radians.
- `y`: Rotation around the Y-axis in radians.
- `z`: Rotation around the Z-axis in radians.
Euler angles are used for representing orientations in 3D space, providing a simple way to articulate sequential rotations around principal axes.
- [t_eulerrot Details](./eulerrot/t_eulerrot.md) - Discusses the specifics of Euler angle rotations and their applications.

### t_quat - Quaternion
- `x`, `y`, `z`, `w`: Components of the quaternion.
Quaternions are powerful tools for computing rotations that avoid gimbal lock and provide efficient, stable, and smooth interpolations for animations and simulations.
- [t_quat Details](./quaternion/t_quat.md) - Explores quaternion operations, advantages, and utility.

### t_sphrot - Spherical Rotation
- `lat` (Latitude): Angle in radians down from the z-axis.
- `lon` (Longitude): Angle in radians around the z-axis from the x-axis.
- `angle`: Rotation angle in radians around the axis defined by latitude and longitude.
Spherical rotations are used when dealing with rotations that map directly onto spherical coordinates, beneficial in geographic and celestial applications.
- [t_sphrot Details](./sphrot/t_sphrot.md) - Detailed documentation on spherical rotation specifics and use cases.

## Usage Scenarios
- **Animation and Rigging**: Quaternions and Euler angles are widely used to animate the joints and bodies in 3D character modeling.
- **Simulation**: Axis-angle and spherical rotations can be used in physics simulations where rotations occur around specific directional vectors.
- **Graphics Rendering**: All rotation types are crucial in positioning, orienting, and animating objects within 3D rendered scenes.

### Return to the home page of the documentation
[Home](../home.md)
