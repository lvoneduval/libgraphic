#ifndef VECTOR2_H
# define VECTOR2_H

typedef struct	s_vector2
{
	float		x;
	float		y;
}				t_vector2;

t_vector2		ft_vector2_new(float x, float y);
t_vector2		ft_vector2_null(void);
t_vector2		ft_vector2_add(t_vector2 v1, t_vector2 v2);
t_vector2		ft_vector2_sub(t_vector2 v1, t_vector2 v2);
t_vector2		ft_vector2_scale(t_vector2 v, float n);
t_vector2		ft_vector2_opp(t_vector2 v);
float			ft_vector2_det(t_vector2 v1, t_vector2 v2);
float			ft_vector2_dotprod(t_vector2 v1, t_vector2 v2);
float			ft_vector2_magn(t_vector2 v);
t_vector2		ft_vector2_normalize(t_vector2 v);
int				ft_vector2_equal(t_vector2 v1, t_vector2 v2);
#endif
