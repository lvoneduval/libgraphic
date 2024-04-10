
static void		print_cam2(t_camera cam)
{
	printf("> Near :\t %2$ .*1$f\n", 6, cam.near);
	printf("> Far :\t\t %2$ .*1$f\n", 6, cam.far);
	printf("> Top limit :\t %2$ .*1$f\n", 6, cam.top_limit);
	printf("> Bottom limit : %2$ .*1$f\n", 6, cam.bottom_limit);
	printf("> Right limit :\t %2$ .*1$f\n", 6, cam.right_limit);
	printf("> Left limit :\t %2$ .*1$f\n", 6, cam.left_limit);
}

void			print_camera(t_camera cam)
{
	int		precision;

	precision = FLOAT_PRECISION;
	printf("> Eye =\t\t{%2$ .*1$f, %3$ .*1$f, %4$ .*1$f }\n",
			precision, cam.eye.x, cam.eye.y, cam.eye.z);
	printf("> Center =\t{%2$ .*1$f, %3$ .*1$f, %4$ .*1$f }\n",
			precision, cam.center.x, cam.center.y, cam.center.z);
	printf("> Up .\t\t{%2$ .*1$f, %3$ .*1$f, %4$ .*1$f }\n",
			precision, cam.up.x, cam.up.y, cam.up.z);
	printf("> Forward .\t{%2$ .*1$f, %3$ .*1$f, %4$ .*1$f }\n",
			precision, cam.forward.x, cam.forward.y, cam.forward.z);
	printf("> Side .\t{%2$ .*1$f, %3$ .*1$f, %4$ .*1$f }\n",
			precision, cam.side.x, cam.side.y, cam.side.z);
	printf("> View angle :\t %2$ .*1$f\n", precision, cam.view_angle);
	printf("> Aspect ratio : %2$ .*1$f\n", precision, cam.aspect_ratio);
	print_cam2(cam);
}
