//Program Nilai siswa
//Program ini dibuat untuk menghitung nilai akhir dan nilai mutu siswa

//

//DEKLARASI PUSTAKA
#include <stdio.h>
#include <math.h>

//DEKLARASI Variabel Global
char nim [30];
float f, uts, uas, total;


//ALGORITMA
int main(){
	for (;;){
	//INPUT
	printf("\nMasukkan NIM: " );
	scanf("%s", &nim);
	printf("Masukkan Formatif: " );
	scanf("%f", &f);
	printf("Masukkan UTS: " );
	scanf("%f", &uts);
	printf("Masukkan UAS: " );
	scanf("%f", &uas);
	
	//PROSES
	total = (f*0.4)+(uts*0.3)+(uas*0.3);
	
	//OUTPUT
	printf ("Nilai akhir mahasiswa %s adalah %.2f \n", nim, total);
	
	if (total>80){
		printf ("Nilai mutu mahasiswa %s adalah A \n", nim);
	}
	else if (total>70){
		printf ("Nilai mutu mahasiswa %s adalah B \n"), nim;
	}
	else if (total>60){
		printf ("Nilai mutu mahasiswa %s adalah C \n", nim);
	}
	else if (total>50){
		printf ("Nilai mutu mahasiswa %s adalah D \n", nim);
	}
	else if (total>40){
		printf ("Nilai mutu mahasiswa %s adalah E \n", nim);
	}
	else{
		printf("Nilai mutu mahasiswa %s adalah F \n", nim);
	}
		
	}
		
	return 0;
}


