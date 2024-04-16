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

### init_mlximg
Creates a new image in the MiniLibX environment.

#### Parameters
`void *mlx_ptr`: Pointer to the MiniLibX connection.
`int width`: Width of the image.
`int height`: Height of the image.

### Returns
t_mlximg *: A pointer to the newly created image, or NULL if creation fails.

### Example Usage
```c
t_mlximg *img = init_mlximg(env->init_id, 640, 480);
if (!img) {
    fprintf(stderr, "Failed to create an image.\n");
}
```