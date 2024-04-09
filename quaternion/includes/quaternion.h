#ifndef QUATERNION_H
# define QUATERNION_H

typdef struct s_quat
{
  float x;
  float y;
  float z;
  float w;
}             t_quat 

t_quat  ft_quat_new(float x, float y, float z, float w);
t_quat  ft_quat_add(t_quat q1, t_quat q2);
t_quat  ft_quat_sub(t_quat q1, t_quat q2);
t_quat  ft_quat_mul(t_quat q1, t_quat q2);
t_quat  ft_quat_crosprod(t_quat q1, t_quat q2);

t_quat  ft_quat_add_r(t_quat q, float r);
t_quat  ft_quat_sub_r(t_quat q, float r);
t_quat  ft_quat_scale(t_quat q, float r);
t_quat  ft_quat_opp(t_quat q);
t_quat  ft_quat_conj(t_quat q);

t_quat  
