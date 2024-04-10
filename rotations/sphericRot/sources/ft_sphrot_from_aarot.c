t_sphrot ft_sphrot_from_aarot(t_aarot aarot)
{
    t_sphrot  sphrot;
    float     magnitude;
    float     nx;
    float     ny;
    float     nz;

    nx = aarot.x / magnitude;
    ny = aarot.y / magnitude;
    nz = aarot.z / magnitude;
    magnitude = sqrtf(aarot.x * aarot.x + aarot.y * aarot.y + aarot.z * aarot.z);
    sphrot.lat = asinf(ny);
    sphrot.lon = atan2f(nx, nz);
    sphrot.angle = aarot.angle;
    return sphrot;
}

