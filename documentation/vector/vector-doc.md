# Vector Documentation Overview

This document serves as the comprehensive guide for vector operations within the project, detailing the use and functionality of the `vector2` and `vector3` classes. Vectors are essential components in fields like graphics programming, physics simulations, and mathematical computations.

## Vector Classes

### t_vector2
**Description**: Represents a 2-dimensional vector, primarily used in 2D space for operations such as graphical transformations, motion computations, and other two-dimensional calculations.
**Structure**:
  - **x** (`float`): The horizontal component of the vector.
  - **y** (`float`): The vertical component of the vector.

### t_vector3
**Description**: Represents a 3-dimensional vector, essential for 3D graphics and simulations. It is used for defining positions, directions, and velocities in three-dimensional space.
**Structure**:
  - **x** (`float`): Represents the width or the x-coordinate in 3D space.
  - **y** (`float`): Represents the height or the y-coordinate in 3D space.
  - **z** (`float`): Represents the depth or the z-coordinate in 3D space.

## Usage

Vectors are integral to numerous aspects of the project:
- **Graphics Module**: Employed for defining coordinates, scaling, rotations, and other transformations.
- **Physics Module**: Utilized in calculating dynamics such as forces, velocities, and trajectories.
- **Mathematical Calculations**: Critical in linear algebra operations, vector arithmetic, and optimization problems.

## Development and Contributions
- The vector classes are designed to be robust yet efficient, capable of handling both basic and advanced vector operations.
- Contributions that enhance functionality, such as introducing more complex vector operations or performance optimizations, are encouraged. Contributors should adhere to the project's coding guidelines.

## Related Documentation
- [t_vector2](./vector2/t_vector2.md) - Provides detailed documentation on operations specific to 2D vectors.
- [t_vector3](./vector3/t_vector3.md) - Covers extensive functionalities of 3D vectors.

### Return to the Main Documentation Page
[Home](../../home.md)
