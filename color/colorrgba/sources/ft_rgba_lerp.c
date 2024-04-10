t_colorrgba	ft_rgba_lerp(t_colorrgba a, t_colorrgba b, float i)
{
	t_colorrgba	shade;

	shade.red = a.red + (b.red - a.red) * i;
	shade.green = a.green + (b.green - a.green) * i;
	shade.blue = a.blue + (b.blue - a.blue) * i;
	shade.alpha = a.alpha + (b.alpha - a.alpha) * i;
	return (shade);
}
