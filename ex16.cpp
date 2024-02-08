#include <stdio.h>

int main(void)
{
	int mt[3][3] = { { 3,8,6 }, { 4,1,7 }, { 5,2,9} };
	int mat[3][3] = { { 1,4,9 }, { 6,5,8 }, { 2,3,7 } };
	int i, j;

	for (i = 0; i < 3; i++)
	{
		printf("¿ä¼Ò %d%d ma = %d mb- %d\n", i, i, mt[i][i], mat[i][i]);
		printf("\n");
	}
	return 0;
}