# del_mlxfbuf
Destroys all images within a framebuffer and frees the framebuffer.

#### Parameters
- `void *mlx_id`: Pointer to the MiniLibX connection.
- `t_mlxfbuf *b`: Pointer to the framebuffer to be destroyed.

#### Returns
- None

#### Example Usage
```c
del_mlxfbuf(env->init_id, fbuf);
fbuf = NULL;
```

## Related Documentation
- [t_mlxbuf](./t_mlxbuf.md)
- [mlx_tools_doc](./mlx-tools-doc.md)

### Return to the home page of the documentation
[home](../home.md)
