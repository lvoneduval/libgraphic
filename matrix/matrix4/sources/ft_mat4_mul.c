t_matrix4 ft_mat4_mul(t_matrix4 m1, t_matrix4 m2)
{
  t_matrix4 dst;
  int     i;
  int     j;

  i = 4;
  while (i--)
  {
    j = 4;
    while (j--)
    {
      dst.array[i][j] = m1.array[i][0] * m2.array[0][j]
        + m1.array[i][1] * m2.array[1][j]
        + m1.array[i][2] * m2.array[2][j]
        + m1.array[i][3] * m2.array[3][j];
    }
  }
  return (dst);
}
