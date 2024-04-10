/*
** Converts a quaternion to Euler angles (rotation around X, Y, and Z axes).
*/
t_eulerrot ft_eulerrot_from_quat(t_quat quat)
{
    t_eulerrot euler;
    float sinr_cosp;
    float cosr_cosp;
    float sinp;
    float siny_cosp;
    float cosy_cosp;

    sinr_cosp = 2.0f * (quat.w * quat.x + quat.y * quat.z);
    cosr_cosp = 1.0f - 2.0f * (quat.x * quat.x + quat.y * quat.y);
    euler.x = atan2f(sinr_cosp, cosr_cosp);
    sinp = 2.0f * (quat.w * quat.y - quat.z * quat.x);
    if (fabs(sinp) >= 1)
        euler.y = copysignf(M_PI / 2, sinp);
    else
        euler.y = asinf(sinp);
    siny_cosp = 2.0f * (quat.w * quat.z + quat.x * quat.y);
    cosy_cosp = 1.0f - 2.0f * (quat.y * quat.y + quat.z * quat.z);
    euler.z = atan2f(siny_cosp, cosy_cosp);
    return (euler);
}
