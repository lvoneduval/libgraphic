#ifndef VECTOR_H
# define VECTOR_H

typedef struct	s_vector2
{
	float		x;
	float		y;
}				t_vector2;

t_vector2		ft_vector2_new(float x, float y);
t_vector2		ft_vector2_add(t_vector2 v1, t_vector2 v2);
t_vector2		ft_vector2_sub(t_vector2 v1, t_vector2 v2);
t_vector2		ft_vector2_scale(t_vector2 v, float n);
t_vector2		ft_vector2_opp(t_vector2 v);
float ft_vector2_det(t_vector2 v1, t_vector2 v2)
float			ft_vector2_dotprod(t_vector2 v1, t_vector2 v2);
float			ft_vector2_magn(t_vector2 v);
t_vector2		ft_vector2_normalize(t_vector2 v);
int				ft_vector2_equal(t_vector2 v1, t_vector2 v2);

typedef struct	s_vector3
{
	float		x;
	float		y;
	float		z;
}				t_vector3;

t_vector3		ft_vector3_new(float x, float y, float z);
t_vector3		ft_vector3_add(t_vector3 v1, t_vector3 v2);
t_vector3		ft_vector3_sub(t_vector3 v1, t_vector3 v2);
t_vector3		ft_vector3_scale(t_vector3 v, float n);
t_vector3		ft_vector3_opp(t_vector3 v);
t_vector3		ft_vector3_crossprod(t_vector3 v1, t_vector3 v2);
float			ft_vector3_dotprod(t_vector3 v1, t_vector3 v2);
float			ft_vector3_magn(t_vector3 v);
t_vector3		ft_vector3_normalize(t_vector3 v);
int				ft_vector3_equal(t_vector3 v1, t_vector3 v2);

#endif
