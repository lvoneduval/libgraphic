### t_mlxfbuf
This structure represents a framebuffer that contains multiple frames.

- `frame` - A pointer to the t_mlximg structure representing the frame.
- `nb_frames` - The number of frames.
- `curr` - The current frame index.

### Related Function
- [init_mlxfbuf](./init_mlxfbuf.md)
- [del_mlxbuf](./del_mlxbuf.md)