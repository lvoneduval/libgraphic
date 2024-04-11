#ifndef G_MATHS_H
# define G_MATHS_H

#include "../../camera/includes/camera.h"
#include "../../vertex/includes/vertex.h"
#include "../../vector/includes/vector.h"
#include "../../matrix/includes/matrix.h"


#include <math.h>

typedef struct	s_frange
{
	float		min;
	float		max;
}				t_frange;

typedef struct	s_irange
{
	int			min;
	int			max;
}				t_irange;

t_matrix4			ft_orthoproj_mat4(float fov, float near,
										float far, float ratio);
t_matrix4			ft_persproj_mat4(float fov, float near,
										float far, float ratio);

float		ft_to_frange(t_frange in, t_frange out, float x);

t_vertex2i	ft_ver3f_proj(t_vertex3f v, t_matrix4 m, int width, int height);

t_vertex2i	ft_viewport_llc(t_vector3 ndc, t_vertex2i origin,
							unsigned int width, unsigned int height);
t_vertex2i	ft_viewport_tlc(t_vector3 ndc, t_vertex2i origin,
							unsigned int width, unsigned int height);
#endif
