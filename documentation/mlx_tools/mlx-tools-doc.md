# Mlx-Tools

## Overview
Mlx-Tools is a module in the Libgraphic project that provides utilities for managing graphics environments, windows, and images using the MiniLibX library. This module facilitates the creation, manipulation, and deletion of graphical elements such as windows and images.

## Constants
This section details the constants defined in `mlx_tools.h` that are used across the Mlx-Tools module.

- **`MLXWIN_WIDTH_MAX`** - The maximum width for a window, set to 1680 pixels.
- **`MLXWIN_HEIGHT_MAX`** - The maximum height for a window, set to 900 pixels.
- **`MLXWIN_DEFAULT_OFFSET`** - The default offset used in window placement and sizing, set to 50 pixels.
- **`MLXWIN_MARGEX`** - The horizontal margin as a percentage of the window width, calculated as 15% of `MLXWIN_WIDTH_MAX`.
- **`MLXWIN_MARGEY`** - The vertical margin as a percentage of the window height, calculated as 15% of `MLXWIN_HEIGHT_MAX`.

## Structures
Below are the structures defined in the `mlx_tools.h` file, utilized by various functions within the Mlx-Tools module.

### t_mlxenv
This structure represents the MiniLibX environment setup.

- `init_id` - Holds the identifier for the MiniLibX instance.

[t_mlxenv](./t_mlxenv.md)

### t_mlxwin
This structure describes a window within the MiniLibX environment.

- `id` - The window identifier.
- `width` - The width of the window.
- `height` - The height of the window.
- `title` - The title of the window.

[t_mlxwin](./t_mlxwin.md)

### t_mlximg
This structure defines an image within the MiniLibX environment.

- `id` - The image identifier.
- `data` - A pointer to the image data.
- `limit` - A pointer to the end of the image data.
- `center` - A pointer to the center of the image data.
- `width` - The width of the image.
- `height` - The height of the image.
- `bpp` - Bits per pixel.
- `sz_line` - Size of one line of the image data.
- `endian` - Endianness of the pixel data.

[t_mlximg](./t_mlximg.md)

### t_mlxfbuf
This structure represents a framebuffer that contains multiple frames.

- `frame` - A pointer to the t_mlximg structure representing the frame.
- `nb_frames` - The number of frames.
- `curr` - The current frame index.

[t_mlxenv](./t_mlxenv.md)


## Functions
Documentation for each function in the Mlx-Tools module:


- [init_mlxenv](./del_mlxenv.md)
- [del_mlxenv](./del_mlxenv.md)
- [init_mlxwin](./init_mlxwin.md)
- [del_mlxwin](./del_mlxwin.md)
- [init_mlximg](./init_mlximg.md)
- [del_mlximg](./del_mlximg.md)
- [init_mlxfbuf](./init_mlxfbuf.md)
- [del_mlxbuf](./del_mlxbuf.md)
- [pixel_to_img](./pixel_to_img.md)
- [mlx_bresenham](./mlx_bresenham.md)
- [fast_line](./fast_line.md)
