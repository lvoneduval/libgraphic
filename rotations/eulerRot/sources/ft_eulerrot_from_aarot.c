/*
** Converts an axis-angle rotation to Euler angles.
*/
t_eulerrot ft_eulerrot_from_aarot(t_aarot aarot)
{
    t_quat quat;
    t_eulerrot euler;

    quat = ft_quat_from_aarot(aarot);
    euler = ft_eulerrot_from_quat(quat);
    return (euler);
}
