### del_mlximg
Destroys a MiniLibX image and frees the associated memory.

#### Parameters
- `void *mlx_id`: Pointer to the MiniLibX connection.
- `t_mlximg *m_img`: Pointer to the MiniLibX image object to be destroyed.

#### Returns
- None

#### Example Usage
```c
del_mlximg(env->init_id, img);
img = NULL;
```