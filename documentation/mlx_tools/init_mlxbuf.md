### init_mlxfbuf
Initializes a framebuffer that can hold multiple frames/images.

### Parameters
`void *mlx_ptr`: Pointer to the MiniLibX connection.
`int n`: Number of frames.
`int w`: Width of each frame.
`int h`: Height of each frame.

### Returns
t_mlxfbuf *: A pointer to the initialized framebuffer, or NULL if initialization fails.

### Example Usage
```c
t_mlxfbuf *fbuf = init_mlxfbuf(env->init_id, 3, 640, 480);
if (!fbuf) {
    fprintf(stderr, "Failed to initialize framebuffer.\n");
}
```

### Related Documentation
- [t_mlxbuf](./t_mlxbuf.md)
- [mlx_tools_doc](./mlx-tools-doc.md)

### Return to the home page of the documentation
[home](../home.md)
