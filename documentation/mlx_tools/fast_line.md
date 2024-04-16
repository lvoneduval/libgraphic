# fast_line
Draws a line between two points on an image using an optimized line-drawing algorithm.

#### Parameters
- `t_mlximg *img`: Pointer to the image where the line will be drawn.
- `t_vertex2i a`: The starting point of the line.
- `t_vertex2i b`: The ending point of the line.

#### Returns
- None

#### Example Usage
```c
t_mlximg *image = init_mlximg(env->init_id, 640, 480);
if (image) {
    t_vertex2i start = {100, 50};
    t_vertex2i end = {200, 150};
    fast_line(image, start, end); // Draws a line from (100, 50) to (200, 150)
}
```

## Related Documentation
- [t_mlximg](./t_mlxbuf.md)
- [t_vertex2i](../vertex/vertex2i/vertex2i.md)
- [mlx_tools_doc](./mlx-tools-doc.md)

### Return to the home page of the documentation
[home](../home.md)
