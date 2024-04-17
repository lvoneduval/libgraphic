# t_matrix4
Defines a 4x4 matrix used for various transformations in 3D graphics, such as rotations, translations, scalings, and perspective transformations.

- `array` - `float[4][4]`: Stores matrix elements in a 2D float array.

### Notes:
This matrix is row-major, which is commonly used in graphics programming. It is essential for applying transformations in a 3D space.

## Matrix Creation Functions
These functions provide different ways to initialize or create a `t_matrix4` matrix.

### Matrix Initialization
- [ft_mat4_null](./ft_mat4_null.md) - Creates a matrix with all zeros.
- [ft_mat4_identity](./ft_mat4_identity.md) - Generates an identity matrix.

### Matrix from Rotation Representations
- [ft_mat4_from_aarot](./ft_mat4_from_aarot.md) - Creates a transformation matrix from an axis-angle rotation.
- [ft_mat4_from_eulerrot](./ft_mat4_from_eulerrot.md) - Generates a matrix based on Euler rotation angles.
- [ft_mat4_from_quat](./ft_mat4_from_quat.md) - Converts a quaternion to a transformation matrix.
- [ft_mat4_from_sphrot](./ft_mat4_from_sphrot.md) - Builds a matrix from a spherical rotation.

## Matrix Operations
These functions perform various matrix operations essential for manipulating 3D transformations.

### Matrix Multiplication
- [ft_mat4_mul](./ft_mat4_mul.md) - Multiplies two matrices.

### Matrix Transformation Utilities
- [ft_mat4_scale_from_vector3](./ft_mat4_scale_from_vector3.md) - Creates a scaling matrix from a 3D vector.
- [ft_mat4_translate_from_vector3](./ft_mat4_translate_from_vector3.md) - Generates a translation matrix from a 3D vector.
- [ft_transpose_mat4](./ft_transpose_mat4.md) - Transposes a given matrix.

## Quaternion and Vector Transformations by Matrix
Matrix operations involving quaternions and vectors for more complex transformations.

### Post-multiplication (Quaternion and Vector)
- [ft_mat4_postmul_norm_quat](./ft_mat4_postmul_norm_quat.md) - Normalizes and then multiplies a quaternion by a matrix.
- [ft_mat4_postmul_quat](./ft_mat4_postmul_quat.md) - Multiplies a quaternion by a matrix.
- [ft_mat4_postmul_vector3](./ft_mat4_postmul_vector3.md) - Multiplies a vector by a matrix.

### Pre-multiplication (Quaternion and Vector)
- [ft_mat4_premul_norm_quat](./ft_mat4_premul_norm_quat.md) - Normalizes and then pre-multiplies a quaternion by a matrix.
- [ft_mat4_premul_quat](./ft_mat4_premul_quat.md) - Pre-multiplies a quaternion by a matrix.
- [ft_mat4_premul_vector3](./ft_mat4_premul_vector3.md) - Pre-multiplies a vector by a matrix.

### Return to the home page of the documentation
[Home](../home.md)
