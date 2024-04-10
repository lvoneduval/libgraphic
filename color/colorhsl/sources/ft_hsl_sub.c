t_colorhsl ft_hsl_sub(t_colorhsl color, t_colorhsl sub)
{
    color.hue -= sub.hue;
    color.saturation -= sub.saturation;
    color.lightness -= sub.lightness;
    return (color);
}
