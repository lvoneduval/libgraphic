int		ft_rgb_to_i(t_colorrgb color)
{
	int		dst;

	dst = color.blue | (color.green << 8) | (color.red << 16);
	return (dst);
}
