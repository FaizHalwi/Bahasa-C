//PROGRAM UsiaSeseorang

//Digunakan untuk menentukan jenis umur seseorang

#include <stdio.h>

int x;

int main(){
	printf ("Masukkan umur: ");
	scanf("%i", &x);
	
	if (x>0 && x<6){
		printf("Balita");
	}
	else if (x>4 && x<13){
		printf("Anak-Anak");
	}
	else if (x>11 && x<21){
		printf("Remaja");
	}
	else if (x>19 && x<61){
		printf("Dewasa");
	}
	else
		printf("Tua");
	return 0;
}


