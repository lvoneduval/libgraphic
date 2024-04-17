# ft_mat4_premul_vector3
Performs pre-multiplication of a 3D vector by a 4x4 matrix. This operation is common in computer graphics for transforming vectors by matrices, especially for transformations like rotations, scaling, or translations that are applied to the vector.

### Parameters
- `t_matrix4 m`: The transformation matrix.
- `t_vector3 v`: The vector to be transformed.

### Function Details
This function calculates the product of the matrix `m` and the vector `v` from the left (matrix-vector multiplication):
- **Matrix-Vector Multiplication**: Each component of the resulting vector (`dst`) is calculated as a dot product of the corresponding matrix row and the vector:
  - **X Component**: Combines the first row of the matrix with the vector.
  - **Y Component**: Combines the second row of the matrix with the vector.
  - **Z Component**: Combines the third row of the matrix with the vector.

### Returns
- `t_vector3`: The transformed vector resulting from the pre-multiplication of `v` by `m`.

### Example Usage
```c
t_matrix4 transformMatrix = { /* Matrix elements initializing here */ };
t_vector3 originalVector = {1.0, 0.0, 0.0};
t_vector3 transformedVector = ft_mat4_premul_vector3(transformMatrix, originalVector);
// transformedVector now holds the new coordinates of the vector after transformation
```

### Notes:
- **Transformation Order**: The vector is pre-multiplied by the matrix, which is important to consider when combining multiple transformations to ensure they are applied in the correct order.
- **Use in Graphics**: This function is crucial for transforming vectors in 3D space, applying transformations like rotations and translations defined by the matrix.

## Related Documentation
- [t_matrix4](./t_matrix4.md)
- [matrix-doc](../matrix-doc.md)
- [t_vector3](../../vector/vector3/t_vector3.md) - Discusses the 3D vector structure and its utilities.

### Return to the home page of the documentation
[Home](../home.md)
