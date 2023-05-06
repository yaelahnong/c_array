#include <stdio.h>
main()
{
	int b;
	int k;
	
	int baris;
	int kolom;
	
	printf("Masukkan baris: ");
	scanf("%d", &baris);
	printf("Masukkan kolom: ");
	scanf("%d", &kolom);
	
	int X[baris][kolom];
	int Y[baris][kolom];
	int Z[baris][kolom];
	
	printf("Memasukkan nilai Array X: \n");
	for(b=0;b<baris;b++)
	{
		for(k=0;k<kolom;k++)
		{
			printf("X[%d][%d] = ", b, k);
			scanf("%d", &X[b][k]);
		}	
	}
	
	printf("Memasukkan nilai Array Y: \n");
	for(b=0;b<baris;b++)
	{
		for(k=0;k<kolom;k++)
		{
			printf("Y[%d][%d] = ", b, k);
			scanf("%d", &Y[b][k]);
		}
	}
	
//	MENJUMLAHKAN ARRAY X DAN Y DIMASUKKAN KE ARRAY Z
	for(b=0;b<baris;b++)
	{
		for(k=0;k<kolom;k++)
		{
			Z[b][k] = X[b][k] + Y[b][k];
		}	
	}
	
	printf("\nMenampilkan hasil penjumlahan array X dan Y:\n");
	
	for (b = 0; b < baris; b++)
	{
		for (k = 0; k < kolom; k++)
		{
			printf("%10d", Z[b][k]);
		}
		printf("\n");
	}
}	
