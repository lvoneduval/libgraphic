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

### Related Functions
- [init_mlximg](./init_mlximg.md)
- [del_mlximg](./del_mlximg.md)
- [pixel_to_img](./pixel_to_img.md)
- [mlx_bresenham](./mlx_bresenham.md)
- [fast_line](./fast_line.md)