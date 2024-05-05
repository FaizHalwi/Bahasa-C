//PROGRAM Segitiga

#include <stdio.h>

int a,b,c;

int main(){
	printf("Masukkan Nilai 1: ");
	scanf("%i", &a);
	printf("Masukkan Nilai 2: ");
	scanf("%i", &b);
	printf("Masukkan Nilai 3: ");
	scanf("%i", &c);
	
	if (a<b && a<c){
		if (b<c){
			printf("%i, %i, %i", a,b,c);
		}
		else
			printf("%i, %i, %i", a,c,b);
	}
	else if (b<a && b<c){
		if (a<c){
			printf("%i, %i, %i", b,a,c);
		}
		else
			printf("%i, %i, %i", b,c,a);
	}
	else{
		if (b<a){
			printf("%i, %i, %i", c,b,a);
		}
		else
			printf("%i, %i, %i", c,a,b);
	}
	
	
	return 0;
}
