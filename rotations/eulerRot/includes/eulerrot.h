#ifndef EULEURROT_H
# define EURLEURROT_H

typedef struct  s_eulerrot {
    float x;   // Rotation around the X-axis
    float y;  // Rotation around the Y-axis
    float z;    // Rotation around the Z-axis
}               t_eulerrot;

t_eulerrot ft_eulerrot_add(t_eulerrot a, t_eulerrot b);
int ft_eulerrot_equal(t_eulerrot a, t_eulerrot b, float tolerance);
t_eulerrot ft_eulerrot_new(float x, float y, float z);
t_eulerrot ft_eulerrot_sub(t_eulerrot a, t_eulerrot b);
t_eulerrot ft_eulerrot_lerp(t_eulerrot a, t_eulerrot b, float t);
#endif
