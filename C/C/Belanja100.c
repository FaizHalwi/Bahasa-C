//PROGRAM DISKON BELANJA

#include <stdio.h>

float belanja, diskon, nilaiDiskon, bayar;

int main (){
	printf("Masukkan Harga Belanja: ");
	scanf("%f", &belanja);
	printf("Masukkan Harga Nilai Diskon: ");
	scanf("%f", &nilaiDiskon);
		
	if (belanja>100000){
		diskon = belanja *nilaiDiskon; 
	}
	else{
		diskon = belanja * 0;
	}
	bayar = belanja - diskon;
	printf("Total diskon: %.2f \n", diskon);
	printf("Total bayar: %.2f \n", bayar);

	return 0;
}




