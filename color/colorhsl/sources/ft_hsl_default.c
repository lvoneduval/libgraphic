t_colorhsl ft_hsl_default(void)
{
    t_colorhsl dst;

    dst.hue = DEFAULT_HUE_VALUE;
    dst.saturation = DEFAULT_SATURATION_VALUE;
    dst.lightness = DEFAULT_LIGHTNESS_VALUE;
    return (dst);
}
