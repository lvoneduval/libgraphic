t_colorhsl ft_hsl_from_rgba(t_colorrgba rgba)
{
    t_colorhsl hsl;
    float r;
    float g;
    float b;
    float max;
    float min;
    float delta;
    float h;
    float s;
    float l;

    r = rgba.red / 255.0f;
    g = rgba.green / 255.0f;
    b = rgba.blue / 255.0f;
    max = fmaxf(r, fmaxf(g, b));
    min = fminf(r, fminf(g, b));
    delta = max - min;
    l = (max + min) / 2.0f;
    if (delta == 0.0f)
    {
        h = 0.0f;
        s = 0.0f;
    }
    else
    {
        s = l > 0.5f ? delta / (2.0f - max - min) : delta / (max + min);
        if (max == r)
            h = (g - b) / delta + (g < b ? 6.0f : 0.0f);
        else if (max == g)
            h = (b - r) / delta + 2.0f;
        else
            h = (r - g) / delta + 4.0f;
        h *= 60.0f;
    }
    hsl.hue = h;
    hsl.saturation = s;
    hsl.lightness = l;
    return (hsl);
}
