t_quat ft_quat_slerp(t_quat a, t_quat b, float alpha)
{
    t_quat out;
    float dot;
    float theta;
    float s1;
    float s2;
    dot = a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
    if (dot < 0.0f)
    {
        a.x = -a.x; a.y = -a.y; a.z = -a.z; a.w = -a.w;
        dot = -dot;
    }
    if (dot > 0.9995f)
    {
        out.x = a.x + alpha * (b.x - a.x);
        out.y = a.y + alpha * (b.y - a.y);
        out.z = a.z + alpha * (b.z - a.z);
        out.w = a.w + alpha * (b.w - a.w);
    }
    else
    {
        theta = acosf(dot);
        s1 = sinf((1.0f - alpha) * theta);
        s2 = sinf(alpha * theta);
        out.x = (a.x * s1 + b.x * s2) / sinf(theta);
        out.y = (a.y * s1 + b.y * s2) / sinf(theta);
        out.z = (a.z * s1 + b.z * s2) / sinf(theta);
        out.w = (a.w * s1 + b.w * s2) / sinf(theta);
    }
    return (out);
}
