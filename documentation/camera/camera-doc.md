# Camera Module

## Overview
The Camera module in the Libgraphic project provides tools for creating and managing camera views and projections within a 3D space. It supports various camera functionalities such as initializing, setting view and projection matrices, and configuring camera parameters.

## Constants
These constants define default camera settings used throughout the Camera module.

- **`DFLT_VANGLE`** - Default vertical angle for the camera's field of view, set to 70.0 degrees.
- **`DFLT_NEAR`** - Default near clipping plane distance, set to 0.1 units.
- **`DFLT_FAR`** - Default far clipping plane distance, set to 100.0 units.

## Structures
Below is the structure defined in the Camera module.

### t_camera
This structure represents a camera in a 3D environment.

- `eye` - Position of the camera in world space.
- `center` - Point in space where the camera is looking.
- `up` - Upward direction relative to the camera's orientation.
- `forward` - Forward direction of the camera, calculated from eye and center.
- `side` - Rightward direction orthogonal to forward and up vectors.
- `view_angle` - Vertical field of view angle.
- `aspect_ratio` - Aspect ratio of the view.
- `near` - Distance to the near clipping plane.
- `far` - Distance to the far clipping plane.
- `top_limit` - Top limit of the camera frustum.
- `bottom_limit` - Bottom limit of the camera frustum.
- `right_limit` - Right limit of the camera frustum.
- `left_limit` - Left limit of the camera frustum.
- `view_matrix` - Matrix representing the camera's view transformation.
- `projection_matrix` - Matrix representing the camera's projection transformation.

[t_camera](./t_camera.md)

## Functions
Documentation for each function in the Camera module:

- [ft_cam_init](./ft_cam_init.md)
- [ft_cam_new](./ft_cam_new.md)
- [ft_view_mat4](./ft_view_mat4.md)
- [ft_cam_lookat](./ft_cam_lookat.md)

### Return to the home page of the documentation
[Home](../home.md)
