/*
** Converts Euler rotation angles to a spherical rotation.
*/
t_sphrot ft_sphrot_from_eulerrot(t_eulerrot euler)
{
    t_quat quat;
    t_sphrot sphrot;

    quat = ft_quat_from_eulerrot(euler);
    sphrot = ft_sphrot_from_quat(quat);
    return (sphrot);
}
