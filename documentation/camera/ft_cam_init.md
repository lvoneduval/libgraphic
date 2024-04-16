# ft_cam_init
Initializes a camera with specified field of view, aspect ratio, near clipping plane, and far clipping plane.

#### Parameters
- `float fov`: Field of view angle in degrees.
- `float ratio`: Aspect ratio of the camera's view (typically width divided by height).
- `float near`: Distance to the near clipping plane.
- `float far`: Distance to the far clipping plane.

#### Returns
- `t_camera`: An initialized camera structure with the specified parameters.

#### Example Usage
```c
t_camera camera = ft_cam_init(70.0f, 16.0f/9.0f, 0.1f, 100.0f);
// Now `camera` is initialized with a view angle of 70 degrees, an aspect ratio of 16:9,
// a near clipping plane at 0.1 units, and a far clipping plane at 100 units.
```

## Related Documentation

- [camera-doc.md](./camera-doc.md)
- [t_camera.md](./t_camera.md)

### Return to the home page of the documentation
[home](../home.md)
