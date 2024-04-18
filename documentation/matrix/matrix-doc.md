# Matrix Documentation Overview

This document serves as the central reference for all matrix-related classes and operations within the project. It covers the specific details and implementations of the matrix structures used for various dimensions, including 2x2, 3x3, 4x4, and other potentially larger or non-standard formats.

## Matrix Classes

### matrix2
- **Description**: Handles operations and transformations using 2x2 matrices. 
- **Status**: In development. 
- **Details**: Designed for simpler or specialized transformations that require less computational overhead.

### matrix3
- **Description**: Manages 3x3 matrix operations, commonly used for 2D transformations and basic 3D rotations.
- **Status**: In development.
- **Details**: Essential for 2D graphical transformations and straightforward 3D tasks where the third dimension involves limited interaction.

### matrix4
- **Description**: Provides comprehensive support for 4x4 matrices, the standard in most 3D graphics and physics calculations.
- **Status**: Fully implemented.
- **Details**: Supports translations, scaling, rotations, and perspective transformations in 3D space.

### matrixX
- **Description**: Introduces support for matrices of arbitrary size, intended for more complex or specialized mathematical tasks.
- **Status**: In development.
- **Details**: Aimed at supporting advanced applications that require custom dimensions beyond the standard 2x2, 3x3, or 4x4 matrices, such as higher-dimensional transformations or specific linear algebra operations.

## Development Status
- The `matrix2`, `matrix3`, and `matrixX` classes are currently under development. They are expected to include optimizations and features that cater to specific needs in graphics programming, physics simulations, and other advanced computational fields.

## Usage
- **Application**: These matrices are used across the project to perform geometric transformations, solve systems of equations, and facilitate rendering and animation tasks.

## Related Documentation
- [t_matrix4](./matrix4/t_matrix4.md) - Detailed documentation on the 4x4 matrix operations.

### Return to the main documentation page
[Home](../home.md)
