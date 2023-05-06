#include <stdio.h>

main()
{
	// -- yang berubah dari sini -- ===========================
 	int MAX; 
	int j;
	
	printf("Masukkan nilai MAX: ");
	scanf("%d", &MAX);
	
	int X[MAX];
	// -- sampe sini -- ========================================
	
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
