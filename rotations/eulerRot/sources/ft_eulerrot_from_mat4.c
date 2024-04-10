/*
** Converts a 4x4 rotation matrix to Euler angles.
*/
t_eulerrot ft_eulerrot_from_mat4(t_matrix4 mat)
{
    t_quat quat;
    t_eulerrot euler;

    quat = ft_quat_from_matrix4(mat);
    euler = ft_eulerrot_from_quat(quat);
    return (euler);
}
