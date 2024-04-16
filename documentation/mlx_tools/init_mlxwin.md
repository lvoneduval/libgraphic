### t_mlxwin
This structure describes a window within the MiniLibX environment.

- `id` - The window identifier.
- `width` - The width of the window.
- `height` - The height of the window.
- `title` - The title of the window.

### init_mlxenv
Creates and initializes a new window using MiniLibX..

#### Parameters
`void *mlx_ptr`: Pointer to the MiniLibX connection.
`int width`: Width of the window.
`int height`: Height of the window.
`char *title`: Title of the window.

#### Returns
- `t_mlxwin *`: A pointer to the initialized window, or `NULL` if initialization fails.

#### Example Usage
```c
t_mlxwin *win = init_mlxwin(env->init_id, 800, 600, "New Window");
if (!win) {
    fprintf(stderr, "Failed to create a window.\n");
}
```
