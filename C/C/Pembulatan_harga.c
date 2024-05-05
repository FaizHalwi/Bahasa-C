//PROGRAM SwalayanJujur


#include <stdio.h>

int harga, sisa, total;

int main (){
	printf("Masukkan harga: ");
	scanf("%i", &harga);
	
	sisa=harga%25;
	
	if (sisa !=0)
		total = harga - sisa ;
	
	else 
		total=harga;
	
	printf("Harga bayar: %i \n", total);
	printf("Harga diskon: %i \n", sisa);
	
	return 0;
}
