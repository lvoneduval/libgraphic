#ifndef MLX_TOOLS_H
# define MLX_TOOLS_H

# define MLXWIN_WIDTH_MAX 1680
# define MLXWIN_HEIGHT_MAX 900
# define MLXWIN_DEFAULT_OFFSET 50
# define MLXWIN_MARGEX (MLXWIN_WIDTH_MAX * 0.15)
# define MLXWIN_MARGEY (MLXWIN_HEIGHT_MAX * 0.15)

typedef struct	s_mlxenv
{
	void		*init_id;
}				t_mlxenv;

typedef struct	s_mlxwin
{
	void		*id;
	int			width;
	int			height;
	char		*title;
}				t_mlxwin;

typedef struct	s_mlximg
{
	void		*id;
	char		*data;
	char		*limit;
	char		*center;
	int			width;
	int			height;
	int			bpp;
	int			sz_line;
	int			endian;
}				t_mlximg;

typedef struct	s_mlxfbuf
{
	t_mlximg	*frame;
	int			nb_frames;
	int			curr;
}				t_mlxfbuf;

t_mlxenv		*init_mlxenv(void);
void			del_mlxenv(t_mlxenv *m_env);

t_mlxwin		*init_mlxwin(void *mlx_id, int sz_x, int sz_y, char *title);
void			del_mlxwin(void *mlx_id, t_mlxwin *m_win);

t_mlximg		*init_mlximg(void *mlx_id, int sz_x, int sz_y);
void			del_mlximg(void *mlx_id, t_mlximg *m_img);

t_mlxfbuf		*init_mlxfbuf(void *mlx_id, int n_frames, int sz_x, int sz_y);
void			del_mlxfbuf(void *mlx_id, t_mlxfbuf *b);

void			pixel_to_img(t_mlximg *img, int x, int y, unsigned int color);

void			mlx_bresenham(t_mlximg *img, t_vertex2i a, t_vertex2i b);
void			fast_line(t_mlximg *img, t_vertex2i a, t_vertex2i b);

#endif
