#include "../includes/mlx_tools.h"

void		pixel_to_img(t_mlximg *img, int x, int y, unsigned int color)
{
	char			*curr_pixel;
	int				i;
	int				j;

	if (x >= 0 && x < img->width && y >= 0 && y < img->height)
	{
		i = img->bpp / 8;
		curr_pixel = img->data + (x * i) + (y * img->sz_line);
		if (img->endian == 0)
		{
			while (i--)
				curr_pixel[i] = (color >> (i * 8)) & 0xFF;
		}
		else
		{
			j = 0;
			while (i--)
			{
				curr_pixel[i] = (color >> (j * 8)) & 0xFF;
				j++;
			}
		}
	}
}
