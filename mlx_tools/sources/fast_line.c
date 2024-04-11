#include "../includes/mlx_tools.h"

static void		case_one(t_mlximg *img, int long_len, int inc, t_vertex2i pt)
{
	int		index;

	index = 0x8000 + (pt.x << 16);
	if (long_len > 0)
	{
		long_len += pt.y;
		while (pt.y <= long_len)
		{
			pixel_to_img(img, (index >> 16), pt.y, 0x00FFFFFF);
			index += inc;
			(pt.y)++;
		}
	}
	else
	{
		long_len += pt.y;
		while (pt.y >= long_len)
		{
			pixel_to_img(img, (index >> 16), pt.y, 0x00FFFFFF);
			index -= inc;
			(pt.y)--;
		}
	}
}

static void		case_two(t_mlximg *img, int long_len, int inc, t_vertex2i pt)
{
	int		index;

	index = 0x8000 + (pt.y << 16);
	if (long_len > 0)
	{
		long_len += pt.x;
		while (pt.x <= long_len)
		{
			pixel_to_img(img, pt.x, (index >> 16), 0x00FFFFFF);
			index += inc;
			(pt.x)++;
		}
	}
	else
	{
		long_len += pt.x;
		while (pt.x >= long_len)
		{
			pixel_to_img(img, pt.x, (index >> 16), 0x00FFFFFF);
			index -= inc;
			(pt.x)--;
		}
	}
}

void			fast_line(t_mlximg *img, t_vertex2i a, t_vertex2i b)
{
	int		y_longer;
	int		short_len;
	int		long_len;
	int		inc;
	int		swap;

	y_longer = 0;
	short_len = b.y - a.y;
	long_len = b.x - a.x;
	if (abs(short_len) > abs(long_len))
	{
		swap = short_len;
		short_len = long_len;
		long_len = swap;
		y_longer = 1;
	}
	inc = long_len == 0 ? 0 : (short_len << 16) / long_len;
	if (y_longer)
		case_one(img, long_len, inc, a);
	else
		case_two(img, long_len, inc, a);
}
