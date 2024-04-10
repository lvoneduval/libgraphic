
void	print_mat4(t_matrix4 m, char *name)
{
	printf("-> Mat4 : %s <-\n", name);
	printf("|% .2f % .2f % .2f % .2f |\n",
			m.array[0][0], m.array[0][1], m.array[0][2], m.array[0][3]);
	printf("|% .2f % .2f % .2f % .2f |\n",
			m.array[1][0], m.array[1][1], m.array[1][2], m.array[1][3]);
	printf("|% .2f % .2f % .2f % .2f |\n",
			m.array[2][0], m.array[2][1], m.array[2][2], m.array[2][3]);
	printf("|% .2f % .2f % .2f % .2f |\n",
			m.array[3][0], m.array[3][1], m.array[3][2], m.array[3][3]);
	printf("\n");
}
