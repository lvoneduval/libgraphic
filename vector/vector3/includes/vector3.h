#ifndef VECTOR3_H
# define VECTOR3_H
typedef struct	s_vector3
{
	float		x;
	float		y;
	float		z;
}				t_vector3;

// constructors
t_vector3		ft_vector3_new(float x, float y, float z);
t_vector3		ft_vector3_null(float x, float y, float z);
t_vector3   ft_vector3_from_quat(t_quat);

t_vector3		ft_vector3_add(t_vector3 v1, t_vector3 v2);
t_vector3		ft_vector3_sub(t_vector3 v1, t_vector3 v2);
t_vector3		ft_vector3_scale(t_vector3 v, float n);
t_vector3		ft_vector3_opp(t_vector3 v);
t_vector3		ft_vector3_crossprod(t_vector3 v1, t_vector3 v2);
t_vector3		ft_vector3_normalize(t_vector3 v);

float       ft_vector3_dotprod(t_vector3 v1, t_vector3 v2);
float       ft_vector3_magn(t_vector3 v);
int         ft_vector3_equal(t_vector3 v1, t_vector3 v2);


#endif
