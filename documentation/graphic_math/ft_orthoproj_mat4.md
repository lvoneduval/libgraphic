# ft_orthoproj_mat4
Calculates an orthographic projection matrix from field of view, aspect ratio, and near/far clipping planes. This matrix is used in rendering pipelines to project 3D points onto a 2D plane.

### Parameters
- `float fov`: Field of view in degrees, which defines the vertical angle of the camera view.
- `float near`: Distance from the viewer to the near clipping plane (must be positive).
- `float far`: Distance from the viewer to the far clipping plane (must be greater than near).
- `float ratio`: Aspect ratio that determines the shape of the projection (width / height).

### Function Details
This function constructs an orthographic projection matrix, which is used to represent points in 3D space on a 2D display without introducing perspective distortion. The calculations adjust for aspect ratio and clipping planes, setting up a projection box where objects outside this box are clipped away.

### Returns
- `t_matrix4`: The calculated orthographic projection matrix.

### Example Usage
```c
float fov = 90.0f;
float near = 0.1f;
float far = 100.0f;
float ratio = 16.0f / 9.0f;
t_matrix4 orthoMatrix = ft_orthoproj_mat4(fov, near, far, ratio);
```

### Notes:
- The orthographic projection is particularly useful in architectural and engineering applications where measurements need to be visually accurate.
- Ensure that `far` is greater than `near` and both are positive to avoid invalid projections.

## Related Documentation
- [g_math-doc](./g_math-doc.md)
- [t_matrix4](../matrix/matrix/t_matrix4.md)

### Return to the home page of the documentation
[home](../home.md)