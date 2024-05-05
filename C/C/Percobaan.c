// PROGRAM Trapesium
//(Algoritma ini digunakan menghitung L dan K Trapesium)

//Deklarasi Trapesium
#include<stdio.h>              //DEKLARASSI PUSTAKA
#include<math.h>               //DEKLARASI VARIABEL
#define dua 2
		int a;			         //DEKLARASI sisi bawah
		int b; 				     //DEKLARASI sisi atas
		int t; 			         //DEKLARASI tinggi 
		int l;                   //DEKLARASI luas
		int k;                   //DEKLARASI keliling                
		int s1, s2, s3, s4;      //DEKLARASI rumus keliling trapesium	
	                
		
		int main(){
			printf("Program Menghitung luas Trapesium \n");
			printf("masukkan sisi bawah: "); scanf("%i",&a);
			printf("masukkan sisi atas: "); scanf ("%i",&b);
			printf("masukkan tinggi: "); scanf ("%i",&t);
			printf("Program Menghitung Keliling Trapesium\n");
            printf("Input s1 : "); scanf("%i", &s1);
            printf("Input s2 : "); scanf("%i", &s2);
            printf("Input s3 : "); scanf("%i", &s3);
            printf("Input s4: "); scanf("%i", &s4 );
			l= ((a+b)*t)/dua ;
			k= s1 + s2 + s3 + s4;
			
			printf("luas trapesium %i\n",l);
			printf("luas keliling %i",k);
			
		return 0;
		}
