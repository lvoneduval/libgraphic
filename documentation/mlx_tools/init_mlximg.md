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

### Related Documentation
[t_mlximg](./t_mlximg.md)
