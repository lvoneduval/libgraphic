#ifndef DEBUG_H
# define DEBUG_H

# define FLOAT_PRECISION	2

void			print_ver2i(t_vertex2i v);
void			print_vec2(t_vector2 v);
void			print_vec3(t_vector3 v);
void			print_quat(t_quater v);
void			print_mat4(t_matrix4 m, char *name);
void			print_camera(t_camera cam);

#endif
