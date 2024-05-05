// Program FPB
// {ALgoritma ini digunakan untuk menghitung nilai FPB dari 2 buah bilangan}

// Deklarasi Pustaka
#include<stdio.h>


// Deklarasi Variabel
int m;     // vatiabel untuk menenruma masukan bilangan ke 1
int n;    // vatiabel untuk menenruma masukan bilangan ke 2
int r;    // vatiabel untuk menenruma masukan bilangan ke 2 

// Algoritma
int main(){
	//masukan program
	printf("Masukkan Bilangan Ke 1 :"); scanf("%i",&m);
	printf("Masukkan Bilangan Ke 2:"); scanf("%i",&n);
	
	//Proses Perulangan
	while(n!=0){
	//proses menghitung FPB 
	r = m % n;
	m = n;
	n = r;	
}
		
	// Keluaran Program
	Printf("FPB adalah %i",m);	
	return 0;
}
