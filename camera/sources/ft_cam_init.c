t_camera	ft_cam_init(float fov, float ratio, float near, float far)
{
	t_camera	cam;

	cam.view_angle = fov;
	cam.aspect_ratio = ratio;
	cam.near = near;
	cam.far = far;
	return (cam);
}
