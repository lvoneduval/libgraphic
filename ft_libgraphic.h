/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libgraphic.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <lduval@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 04:41:48 by lduval            #+#    #+#             */
/*   Updated: 2017/03/09 18:55:49 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
t_color			*ft_color_mult(t_color *c1, t_color *c2);
t_color			*ft_color_sub(t_color *c1, t_color *c2);

/*
** /////////////////////////////////////////////////////////////////////////////
** Structure Vertex :
** 
** /////////////////////////////////////////////////////////////////////////////
*/

typedef	struct	s_vertex3
{
	float		x;
	float		y;
	float		z;
	float		w;
	t_color 	*color;

}				t_vertex;

/*
** /////////////////////////////////////////////////////////////////////////////
** Structure  Vector :
** 
** /////////////////////////////////////////////////////////////////////////////
*/


typedef	struct	s_vector3
{
	float		x;
	float		y;
	float		z;
	float		w;

}				t_vector3;


t_vector3		*ft_vector3_normalize(t_vector3 *v);
t_vector3		*ft_vector3_add(t_vector3 *v1, t_vector3 *v1);
t_vector3		*ft_vector3_sub(t_vector3 *v1, t_vector3 *v2);
t_vector3		*ft_vector3_opposite(t_vector3 *v);
t_vector3		*ft_vector3_prodxscal(t_vector3 *v, float f);
t_vector3		*ft_vector3_prodxvect(t_vector3 *v1, t_vector2 *v2);
t_vector3		*ft_vector3_prodcross(t_vector3 *v1, t_vector2 *v2);
t_vector3		*ft_vector3_cos(t_vector3 *v1, t_vector2 *v2);

/*
** /////////////////////////////////////////////////////////////////////////////
** Structure Matrix :
** 
** /////////////////////////////////////////////////////////////////////////////
*/

typedef struct	s_matrix3
{
	int			m[4][4];
}				t_matrix3;


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
	t_matrix3	*tT;
	t_matrix3	*tR;
	t_matrix3	*view_matrix;
}				t_camera;

t_vertex3		*watchvertex(t_camera *cam, t_vertex *v);
