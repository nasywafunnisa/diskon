#include <stdio.h>

int main()
{
	float harga_awal;
	float diskon;
	float harga_akhir;
	
	printf("Harga Awalnya ");
	scanf("%f", &harga_awal);
	
	printf("Besar Diskon ");
	scanf("%f", &diskon );
	
	harga_akhir = harga_awal - (harga_awal * diskon/100);
	printf("Harga setelah diskon %.1f", harga_akhir );
	
	return 0;
}
