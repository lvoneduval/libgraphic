# ft_cam_new
Allocates and initializes a new camera with specified field of view, aspect ratio, near clipping plane, and far clipping plane. This function also calculates the frustum limits based on the provided parameters.

#### Parameters
- `float fov`: Field of view angle in degrees.
- `float ratio`: Aspect ratio of the camera's view (typically width divided by height).
- `float near`: Distance to the near clipping plane.
- `float far`: Distance to the far clipping plane.

#### Returns
- `t_camera *`: A pointer to the newly allocated and initialized camera structure, or `NULL` if the allocation fails.

#### Example Usage
```c
t_camera *camera = ft_cam_new(70.0f, 16.0f/9.0f, 0.1f, 100.0f);
if (camera) {
    // Camera is successfully created and initialized.
    // You can now set up the camera in your scene.
} else {
    fprintf(stderr, "Failed to allocate new camera.\n");
}
```

## Related Documentation

- [camera-doc.md](./camera-doc.md)
- [t_camera.md](./t_camera.md)

### Return to the home page of the documentation
[home](../home.md)
