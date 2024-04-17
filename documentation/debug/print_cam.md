# print_camera
Outputs detailed information about a camera object to the standard output. This function is designed for debugging purposes to help visualize the configuration of a camera in a 3D graphics environment.

### Parameters
- `t_camera cam`: The camera object to print.

### Function Details
This function prints detailed information about each component of the camera, including position vectors, viewing direction, and camera settings such as the view angle and clipping planes. It utilizes `printf` with precision formatting to ensure that floating-point values are displayed with a consistent number of decimal places as defined by the `FLOAT_PRECISION` constant.

### Printed Information
- **Eye**: The position of the camera in world coordinates.
- **Center**: The point in world space where the camera is looking.
- **Up**: The upward direction vector relative to the camera's orientation.
- **Forward**: The forward direction vector pointing from the eye towards the center.
- **Side**: The right-side direction vector orthogonal to both forward and up vectors.
- **View Angle**: The vertical field of view of the camera in degrees.
- **Aspect Ratio**: The ratio of the camera's viewport width to its height.
- **Near and Far**: The distances to the near and far clipping planes, which define how close and how far away objects can be before they are clipped out of the view.
- **Limits**: The top, bottom, right, and left limits of the camera's view frustum.

### Example Usage
```c
t_camera camera = ft_cam_init(70.0f, 16.0f/9.0f, 0.1f, 100.0f);
print_camera(myCamera);
```

### Notes:
- **Precision Control**: The function uses the `FLOAT_PRECISION` constant to control the decimal precision of the floating-point outputs, which can be adjusted as needed.
- **Debugging Tool**: Primarily used as a debugging tool to quickly verify and adjust camera parameters during development.

## Related Documentation
- [debug-doc](./debug-doc.md)
- [t_camera](../camera/t_camera.md)

### Return to the home page of the documentation
[Home](../home.md)
