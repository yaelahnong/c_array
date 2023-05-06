#include <stdio.h>

main()
{
	int X[5] = {15, 25, 35, 45, 55};
	int Y[5] = {10};
	int Z[5] = {15, 0 , 35};
	
	int j;
	
	int jum_x = 0;
	int jum_y = 0;
	int jum_z = 0;
	
	for (j = 0; j < 5; j++)
	{
		jum_x = jum_x + X[j];
		jum_y = jum_y + Y[j];
		jum_z = jum_z + Z[j];
	}
	
	printf("X[%d] = %2d, Y[%d] = %2d, Z[%d] = %2d\n", j, jum_x, j, jum_y, j, jum_z);
}
