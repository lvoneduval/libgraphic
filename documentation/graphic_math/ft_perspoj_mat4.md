# ft_persproj_mat4
Calculates a perspective projection matrix based on the field of view, near and far planes, and aspect ratio. This matrix is used to project 3D points onto a 2D plane, introducing perspective distortion where objects farther away appear smaller.

### Parameters
- `float fov`: Field of view in degrees, which defines the vertical angle of the camera view.
- `float near`: Distance from the viewer to the near clipping plane (must be positive).
- `float far`: Distance from the viewer to the far clipping plane (must be greater than near).
- `float ratio`: Aspect ratio that determines the shape of the projection (width / height).

### Function Details
This function creates a perspective projection matrix that mimics the way the human eye perceives the world, making it essential for any 3D graphics rendering. It considers the field of view and the specified near and far clipping planes to accurately project 3D objects onto a 2D viewport.

### Returns
- `t_matrix4`: The resulting perspective projection matrix, which can be used to transform 3D coordinates into 2D coordinates while maintaining a realistic depth perception.

### Example Usage
```c
float fov = 90.0f; // Typical field of view for a wide-angle lens
float near = 0.1f; // Close enough to capture details
float far = 1000.0f; // Far enough to include distant objects
float ratio = 16.0f / 9.0f; // Common aspect ratio for HD video
t_matrix4 perspMatrix = ft_persproj_mat4(fov, near, far, ratio);
```

### Notes:
- **Field of View**: A larger field of view can capture more of the scene but may introduce more distortion.
- **Clipping Planes**: It's crucial that the near plane is always less than the far plane and both should be positive. Improper values can lead to rendering errors or reversed depth.

## Related Documentation
- [g_math-doc](./g_math-doc.md)
- [t_matrix4](../matrix/matrix4/t_matrix4.md)

### Return to the home page of the documentation
[home](../home.md)
