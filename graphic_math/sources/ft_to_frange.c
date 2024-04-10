float		ft_to_frange(t_frange in, t_frange out, float x)
{
	return (((x - in.min) / (in.max - in.min)) * (out.max - out.min) + out.min);
}
