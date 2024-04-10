t_quat ft_quat_from_euler(t_eulerRot euler)
{
    t_quat quat;
    float cy;
    float sy;
    float cp;
    float sp;
    float cr;
    float sr;

    cy = cosf(euler.z * 0.5);
    sy = sinf(euler.z * 0.5);
    cp = cosf(euler.y * 0.5);
    sp = sinf(euler.y * 0.5);
    cr = cosf(euler.x * 0.5);
    sr = sinf(euler.x * 0.5);
    quat.w = cr * cp * cy + sr * sp * sy;
    quat.x = sr * cp * cy - cr * sp * sy;
    quat.y = cr * sp * cy + sr * cp * sy;
    quat.z = cr * cp * sy - sr * sp * cy;
    return quat;
}