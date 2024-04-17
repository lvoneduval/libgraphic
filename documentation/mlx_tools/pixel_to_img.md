# pixel_to_img
Sets a pixel at a specific location in an image to a specified color.

#### Parameters
- `t_mlximg *img`: Pointer to the image in which the pixel will be set.
- `int x`: The x-coordinate of the pixel.
- `int y`: The y-coordinate of the pixel.
- `unsigned int color`: The color to set the pixel, formatted as an unsigned integer.

#### Returns
- None

#### Example Usage
```c
t_mlximg *image = init_mlximg(env->init_id, 640, 480);
if (image) {
    pixel_to_img(image, 100, 50, 0xFFFFFF); // Sets the pixel at (100, 50) to white
}
```

## Related Documentation
- [t_mlximg](./t_mlximg.md)
- [mlx_tools_doc](./mlx-tools-doc.md)

### Return to the home page of the documentation
[Home](../home.md)
