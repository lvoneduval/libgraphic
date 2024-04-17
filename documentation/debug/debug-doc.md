# Debug Module Overview

The Debug Module provides a suite of functions designed to output detailed information about various data structures used in graphics programming. This documentation covers the functions that print properties of vectors, vertices, matrices, quaternions, and camera configurations, aiding in debugging and ensuring correctness in graphical applications.

## Functions
Documentation for each function in the Camera module:

- [print_vector2](./print_vector2.md)
- [print_vector3](./print_vector3.md)
- [print_vertex2i](./print_vertex2i.md)
- [print_quat](./print_quat.md)
- [print_matrix4](./print_matrix4.md)
- [print_camera](./print_camera.md)

### Precision Control
- `FLOAT_PRECISION`: A constant that defines the number of decimal places for floating-point outputs, impacting all print functions in this module.

### Notes
- These functions are designed primarily for debugging and should be used to assist in the development and troubleshooting of graphical applications.
- The output precision can be adjusted via the `FLOAT_PRECISION` constant to suit different needs for clarity or detail in the printed information.

### Return to the home page of the documentation
[home](../home.md)
