# ft_mat4_scale_from_vector3
Creates a 4x4 scaling matrix from a 3D vector. This matrix is used to scale an object's dimensions by the specified vector components along each axis (x, y, and z).

### Parameters
- `t_vector3 v`: The vector representing scaling factors along the x, y, and z axes.

### Function Details
This function constructs a scaling matrix based on the input vector:
- **Matrix Initialization**: Starts with an identity matrix to ensure no unwanted transformations.
- **Scaling Factors**: Modifies the diagonal of the matrix to include the scaling values provided by the vector `v`, allowing each axis of an object to be scaled independently according to the vector components.

### Returns
- `t_matrix4`: A scaling matrix that can be used to adjust the size of objects in 3D space as specified by the vector.

### Example Usage
```c
t_vector3 scaleFactors = {2.0, 3.0, 4.0}; // Scale by 2 on x-axis, 3 on y-axis, and 4 on z-axis
t_matrix4 scalingMatrix = ft_mat4_scale_from_vector3(scaleFactors);
```

### Notes:
- **Usage in Graphics**: Scaling matrices are fundamental for adjusting the size of models in a scene, whether to increase or decrease them or to achieve non-uniform scaling.
- **Combination with Other Transformations**: Often used in conjunction with rotation and translation matrices to perform complex transformations on 3D models.

## Related Documentation
- [t_matrix4](./t_matrix4.md)
- [matrix-doc](../matrix-doc.md)
- [t_vector3](../../vector/vector3/t_vector3.md) - Provides more details on the 3D vector structure used for the scaling parameters.

### Return to the home page of the documentation
[Home](../home.md)
