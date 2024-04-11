#include "../includes/mlx_tools.h"

t_mlxenv		*init_mlxenv(void)
{
	t_mlxenv	*env;

	env = (t_mlxenv *)malloc(sizeof(t_mlxenv));
	if (env == NULL)
		return (NULL);
	env->init_id = mlx_init();
	if (env->init_id == NULL)
	{
		free(&env);
		return (NULL);
	}
	return (env);
}

t_mlxwin		*init_mlxwin(void *mlx_ptr, int width, int height, char *title)
{
	t_mlxwin	*win;

	win = (t_mlxwin *)malloc(sizeof(t_mlxwin));
	if (win == NULL)
		return (NULL);
	win->id = mlx_new_window(mlx_ptr, width, height, title);
	if (win->id == NULL)
	{
		free(&win);
		return (NULL);
	}
	win->width = width;
	win->height = height;
	win->title = title;
	return (win);
}

t_mlximg		*init_mlximg(void *mlx_ptr, int width, int height)
{
	t_mlximg	*img;

	img = (t_mlximg *)malloc(sizeof(t_mlximg));
	if (img == NULL)
		return (NULL);
	img->id = mlx_new_image(mlx_ptr, width, height);
	if (img->id == NULL)
	{
		free(&img);
		return (NULL);
	}
	img->data = mlx_get_data_addr(img->id, &img->bpp, \
									&img->sz_line, &img->endian);
	img->width = width;
	img->height = height;
	img->limit = img->data + img->width * img->bpp + img->height * img->sz_line;
	img->center = img->data + ((img->limit - img->data) / 2);
	return (img);
}

t_mlxfbuf		*init_mlxfbuf(void *mlx_ptr, int n, int w, int h)
{
	t_mlxfbuf	*b;
	int			i;

	if ((b = (t_mlxfbuf *)malloc(sizeof(t_mlxfbuf))) == NULL)
		return (NULL);
	b->curr = 0;
	i = 0;
	if ((b->frame = (t_mlximg *)malloc(sizeof(t_mlximg) * n)) != NULL)
	{
		while (i < n && (b->frame[i].id = mlx_new_image(mlx_ptr, w, h)) != NULL)
		{
			b->frame[i].width = w;
			b->frame[i].height = h;
			b->frame[i].data = mlx_get_data_addr(b->frame[i].id,
				&b->frame[i].bpp, &b->frame[i].sz_line, &b->frame[i].endian);
			b->frame[i].limit = b->frame[i].data + b->frame[i].width
				* b->frame[i].bpp + b->frame[i].height * b->frame[i].sz_line;
			b->frame[i].center = b->frame[i].data
				+ ((b->frame[i].limit - b->frame[i].data) / 2);
			i++;
		}
	}
	b->nb_frames = i;
	return (b);
}
