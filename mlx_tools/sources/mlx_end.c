#include "../includes/mlx_tools.h"

void	del_mlxenv(t_mlxenv *m_env)
{
	if (m_env)
	{
		free(m_env);
	}
}

void	del_mlxwin(void *mlx_id, t_mlxwin *m_win)
{
	if (m_win)
	{
		if (mlx_id && m_win->id)
			mlx_destroy_window(mlx_id, m_win->id);
		free(m_win);
	}
}

void	del_mlximg(void *mlx_id, t_mlximg *m_img)
{
	if (m_img)
	{
		if (mlx_id && m_img->id)
			mlx_destroy_image(mlx_id, m_img->id);
		free(m_img);
	}
}

void	del_mlxfbuf(void *mlx_id, t_mlxfbuf *b)
{
	int		i;

	if (b && mlx_id)
	{
		if (b->frame)
		{
			i = b->nb_frames;
			while (i-- > 0)
				if (b->frame[i].id)
					mlx_destroy_image(mlx_id, b->frame[i].id);
			free(b->frame);
		}
		free(b);
	}
}
