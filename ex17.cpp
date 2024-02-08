#include <stdio.h>

int main(void)
{
	int mat[3][3] = { { 1,2,3 }, { 4,5,6 }, { 7,8,9 } };
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("mat[%d][%d]= %d\t", i, j, mat[i][j]);
		printf("\n");
	}
	return 0;
}