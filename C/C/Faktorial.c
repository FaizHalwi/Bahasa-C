//  Program faktorial 
// {Algoritma ini digunakan untuk menghitung faktorial dari
// sebuah bilangan bulat}

// Deklarasi Pustaka
#include<stdio.h>

// Deklarasi Variabel
int angka;
int i;
int faktorial=1;

// ALgoritma
int main(){
	//masukkan program
	printf("Masukan Angka :"); scanf("%i,&angka");
	
	//Proses Perulangan
	for(i=angka; i>=1; i--){
    // Proses menghitung Faktrorial
    faktorial = faktorial * i;
    }
    // Keluaran Program
    Printf("Faktorial dari %i adalah %i",angka,faktorial);
    return 0;
}
