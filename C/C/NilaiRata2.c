#include<stdio.h> 
#include <conio.h>

int bil1,bil2,bil3,bil4,bil5,jumlah;
float rata; 

main() 
{ 
printf("Masukkan Bilangan 1 : "); scanf("%d", &bil1);
printf("Masukkan Bilangan 2 : "); scanf("%d", &bil2); 
printf("Masukkan Bilangan 3 : "); scanf("%d", &bil3); 
printf("Masukkan Bilangan 4 : "); scanf("%d", &bil4); 
printf("Masukkan Bilangan 5 : "); scanf("%d", &bil5); 

jumlah=bil1+bil2+bil3+bil4+bil5; rata=jumlah/5; 

printf("\nMaka Jumlahnya adalah %d\nDan Rata-Ratanya adalah %.2f", jumlah,rata);  
getch(); 
}
