t_colorrgba		ft_rgba_from_i(int color)
{
	t_colorrgba		dst;

	dst.blue = color & 0xFF;
	dst.green = (color >> 8) & 0xFF;
	dst.red = (color >> 16) & 0xFF;
	dst.alpha = (color >> 24) & 0xFF;
	return (dst);
}
