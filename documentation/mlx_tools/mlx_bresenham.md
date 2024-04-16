## mlx_bresenham
Draws a line between two points using Bresenham's line drawing algorithm, which is efficient for creating a straight line with a discrete raster.

#### Parameters
- `t_mlximg *img`: Pointer to the image where the line will be drawn.
- `t_vertex2i a`: Starting vertex of the line.
- `t_vertex2i b`: Ending vertex of the line.

#### Returns
- None

#### Example Usage
```c
t_mlximg *image = init_mlximg(env->init_id, 640, 480);
if (image) {
    t_vertex2i start = {100, 50};
    t_vertex2i end = {200, 150};
    mlx_bresenham(image, start, end); // Draws a line from (100, 50) to (200, 150)
}
```

### Related Documentation
- [t_mlximg](./t_mlximg.md)
- [t_vertex2i](../vertex/vertex2i/vertex2i.md)
- [mlx_tools_doc](./mlx-tools-doc.md)
