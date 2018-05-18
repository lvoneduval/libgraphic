/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgraphic.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <lduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 04:41:48 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 07:32:20 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGRAPHIC_H
# define LIBGRAPHIC_H
# include <math.h>
# include <stdlib.h>

/*
** /////////////////////////////////////////////////////////////////////////////
** Structure Color :
**
** /////////////////////////////////////////////////////////////////////////////
*/

typedef struct	s_color
{
	int			red;
	int			green;
	int			blue;
}				t_color;

t_color			*ft_color_add(t_color *c1, t_color *c2);
t_color			*ft_color_mult(t_color *c1, float rat);
t_color			*ft_color_sub(t_color *c1, t_color *c2);

/*
** /////////////////////////////////////////////////////////////////////////////
** Structure Vertex :
**
** /////////////////////////////////////////////////////////////////////////////
*/

typedef	struct	s_vertex3
{
	int			x;
	int			y;
	int			z;
	float		w;
	t_color		*color;
}				t_vertex;


/*
** /////////////////////////////////////////////////////////////////////////////
** Structure Matrix :
**
** /////////////////////////////////////////////////////////////////////////////
*/

typedef struct	s_matrix3
{
	float		m[4][4];
}				t_matrix3;

t_matrix3		*ft_matrix3_new(void);
t_matrix3		*ft_matrix3_newscale(float f);
t_matrix3		*ft_matrix3_newrot(char c, float angle);
t_matrix3		*ft_matrix3_newtranslat(t_vector3 *v);
t_matrix3		*ft_matrix3_newproject(float fov, float ratio,
		float near, float far);
t_matrix3		*ft_matrix3_multm(t_matrix3 *m1, t_matrix *m2);
t_matrix3		*ft_matrix3_multv(t_matrix3 *m, t_vector3 *v);

/*
** /////////////////////////////////////////////////////////////////////////////
** Structure Camera :
**
** /////////////////////////////////////////////////////////////////////////////
*/

typedef struct	s_camera
{
	t_vertex3	*origin;
	t_matrix3	orientation;
	int			width;
	int			height;
	float		fov;
	float		ratio;
	float		near;
	float		far;
	t_matrix3	*tt;
	t_matrix3	*tr;
	t_matrix3	*view_matrix;
}				t_camera;

t_vertex3		*watchvertex(t_camera *cam, t_vertex *v);
#endif
