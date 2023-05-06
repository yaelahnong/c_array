#include <stdio.h>
#define MAX 5

main()
{
	int X[MAX];
	int j;
	
	printf("Memasukkan nilai: \n");
	for(j=0;j<MAX;j++)
	{
		printf("X[%d] = ", j);
		scanf("%d", &X[j]);
	}
	
	printf("Menampilkan nilai:");
	
	for(j=0;j<MAX;j++)
	{
		printf("\nX[%d] = %d", j, X[j]);
	}
}
