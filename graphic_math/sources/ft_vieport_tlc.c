t_vertex2i	ft_viewport_tlc(t_vector3 ndc, t_vertex2i origin,
							unsigned int width, unsigned int height)
{
	t_vertex2i	window;

	window.x = (int)((ndc.x + 1.0) * (float)--width * 0.5 + (float)origin.x);
	window.y = (int)((1.0 - ndc.y) * (float)--height * 0.5 + (float)origin.y);
	return (window);
}
