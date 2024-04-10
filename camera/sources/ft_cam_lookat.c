t_matrix4	ft_cam_lookat(t_camera *cam, t_vector3 eye,
						t_vector3 center, t_vector3 up)
{
	t_vector3	forward;
	t_vector3	side;
	t_matrix4	view;

	up = ft_vector3_normalize(up);
	forward = ft_vector3_sub(eye, center);
	forward = ft_vector3_normalize(forward);
	side = ft_vector3_crossprod(up, forward);
	up = ft_vector3_crossprod(forward, side);
	cam->up = up;
	cam->side = side;
	cam->forward = forward;
	cam->eye = eye;
	cam->center = center;
  view = ft_view_mat4(eye, up, side, forward);
	cam->view_matrix = view;
	return (view);
}
