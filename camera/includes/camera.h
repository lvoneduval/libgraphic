#ifndef CAMERA_H
# define CAMERA_H

# define DFLT_VANGLE 70.0
# define DFLT_NEAR 0.1
# define DFLT_FAR 100.0

#include "../../matrix/includes/matrix.h"
#include "../../vector/includes/vector.h"
#include <stdio.h>

typedef struct	s_camera
{
	t_vector3	eye;
	t_vector3	center;
	t_vector3	up;
	t_vector3	forward;
	t_vector3	side;
	float		view_angle;
	float		aspect_ratio;
	float		near;
	float		far;
	float		top_limit;
	float		bottom_limit;
	float		right_limit;
	float		left_limit;
	t_matrix4	view_matrix;
	t_matrix4	projection_matrix;
}				t_camera;

t_camera	ft_cam_init(float fov, float ratio, float near, float far);
t_camera	*ft_cam_new(float fov, float ratio, float near, float far);

t_matrix4	ft_view_mat4(t_vector3 eye, t_vector3 up,
							t_vector3 side, t_vector3 forward);
t_matrix4	ft_cam_lookat(t_camera *cam, t_vector3 eye,
						t_vector3 center, t_vector3 up);

#endif
