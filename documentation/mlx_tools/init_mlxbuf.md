### t_mlxfbuf
This structure represents a framebuffer that contains multiple frames.

- `frame` - A pointer to the t_mlximg structure representing the frame.
- `nb_frames` - The number of frames.
- `curr` - The current frame index.

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
