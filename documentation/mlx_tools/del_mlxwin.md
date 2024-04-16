## Deletion Function Documentation

### del_mlxwin
Destroys a MiniLibX window and frees the associated memory.

#### Parameters
- `void *mlx_id`: Pointer to the MiniLibX connection.
- `t_mlxwin *m_win`: Pointer to the MiniLibX window object to be destroyed.

#### Returns
- None

#### Example Usage
```c
del_mlxwin(env->init_id, win);
win = NULL;
```

### Related Documentation
[t_mlxwin](./t_mlxwin.md)
