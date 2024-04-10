static int		is_visible(t_vertex2i pt, int w, int h)
{
	return (pt.x >= 0 && pt.x < w && pt.y >= 0 && pt.y < h);
}

/*
**	->	Draw a line defined by two vertices a & b int a mlx_window
**		Drawing algorithm comply to bresenham integer only variant
*/

void			mlx_bresenham(t_mlximg *img, t_vertex2i a, t_vertex2i b)
{
	int	delta_x;
	int	delta_y;
	int	error;

	error = b.x - a.x;
	delta_x = (error << 1);
	delta_y = ((b.y - a.y) << 1);
	while (a.x <= b.x)
	{
		if (is_visible(a, img->width, img->height))
			pixel_to_img(img, a.x, a.y, 0x00FFFFFF);
		a.x++;
		if ((error -= delta_y) <= 0)
		{
			a.y++;
			error += delta_x;
		}
	}
}
