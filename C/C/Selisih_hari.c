//PROGRAM SelisihHari

#include <stdio.h>

typedef struct {
	int dd, mm, yy;
} tanggal1;
typedef struct {
	int dd, mm, yy;
} tanggal2;

tanggal1 t1;
tanggal2 t2;
int selisih;
int hari;
int hari2;
int hari3;
int x;
int y;

int main(){
	printf("Tanggal Pertama: " );
	scanf("%i", &t1.dd);
	printf("Bulan Pertama: ");
	scanf("%i", &t1.mm);
	printf("Tahun Pertama: ");
	scanf("%i", &t1.yy);	
	printf("Tanggal Kedua: " );
	scanf("%i", &t2.dd);
	printf("Bulan Kedua: ");
	scanf("%i", &t2.mm);
	printf("Tahun Kedua: ");
	scanf("%i", &t2.yy);
	
	
	
	switch(t1.mm){
		case 1:
		hari= t1.dd;
		break;
		case 2:
		hari= 31+t1.dd;
		break;
		case 3:
		if (t1.yy % 4 == 0 && t1.yy % 100 !=0 || t1.yy / 400 == 0)
			hari=31+29+t1.dd ;
		else
			hari=31+28+t1.dd ;
		break;
		case 4:
		if (t1.yy % 4 == 0 && t1.yy % 100 !=0 || t1.yy / 400== 0)
			hari=31+29+32+t1.dd ;
		else
			hari=31+28+31+t1.dd ;
		break;
		case 5:
		if (t1.yy % 4 == 0 && t1.yy % 100 !=0 || t1.yy / 400== 0)
			hari=31+29+31+30+t1.dd ;
		else
			hari=31+28+31+30+t1.dd ;
		break;
		case 6:
		if (t1.yy % 4 == 0 && t1.yy % 100 !=0 || t1.yy / 400== 0)
			hari=31+29+31+30+31+t1.dd ;
		else
			hari=31+28+31+30+31+t1.dd ;
		break;
		case 7:
		if (t1.yy % 4 == 0 && t1.yy % 100 !=0 || t1.yy / 400== 0)
			hari=31+29+31+30+31+30+t1.dd ;
		else
			hari=31+28+31+30+31+30+t1.dd ;
		break;
		case 8:
		if (t1.yy % 4 == 0 && t1.yy % 100 !=0 || t1.yy / 400== 0)
			hari=31+29+31+30+31+30+31+t1.dd ;
		else
			hari=31+28+31+30+31+30+31+t1.dd ;
		break;
		case 9:
		if (t1.yy % 4 == 0 && t1.yy % 100 !=0 || t1.yy / 400== 0)
			hari=31+29+31+30+31+30+31+31+t1.dd ;
		else
			hari=31+28+31+30+31+30+31+31+t1.dd ;
		break;
		case 10:
		if (t1.yy % 4 == 0 && t1.yy % 100 !=0 || t1.yy / 400== 0)
			hari=31+29+31+30+31+30+31+31+30+t1.dd ;
		else
			hari=31+28+31+30+31+30+31+31+30+t1.dd ;
		break;
		case 11:
		if (t1.yy % 4 == 0 && t1.yy % 100 !=0 || t1.yy / 400== 0)
			hari=31+29+31+30+31+30+31+31+30+31+t1.dd ;
		else
			hari=31+28+31+30+31+30+31+31+30+31+t1.dd ;
		break;
		case 12:
		if (t1.yy % 4 == 0 && t1.yy % 100 !=0 || t1.yy / 400== 0)
			hari=31+29+31+30+31+30+31+31+30+31+30+t1.dd ;
		else
			hari=31+28+31+30+31+30+31+31+30+31+30+t1.dd ;
		break;
	}	
	
	switch(t2.mm){
		case 1:
		hari2= t2.dd;
		break;
		case 2:
		hari2= 31+t2.dd;
		break;
		case 3:
		if (t2.yy % 4 == 0 && t2.yy % 100 !=0 || t2.yy / 400 == 0)
			hari2=31+29+t2.dd ;
		else
			hari2=31+28+t2.dd ;
		break;
		case 4:
		if (t2.yy % 4 == 0 && t2.yy % 100 !=0 || t2.yy / 400== 0)
			hari2=31+29+32+t2.dd ;
		else
			hari2=31+28+31+t2.dd ;
		break;
		case 5:
		if (t2.yy % 4 == 0 && t2.yy % 100 !=0 || t2.yy / 400== 0)
			hari2=31+29+31+30+t2.dd ;
		else
			hari2=31+28+31+30+t2.dd ;
		break;
		case 6:
		if (t2.yy % 4 == 0 && t2.yy % 100 !=0 || t2.yy / 400== 0)
			hari2=31+29+31+30+31+t2.dd ;
		else
			hari2=31+28+31+30+31+t2.dd ;
		break;
		case 7:
		if (t2.yy % 4 == 0 && t2.yy % 100 !=0 || t2.yy / 400== 0)
			hari2=31+29+31+30+31+30+t2.dd ;
		else
			hari2=31+28+31+30+31+30+t2.dd ;
		break;
		case 8:
		if (t2.yy % 4 == 0 && t2.yy % 100 !=0 || t2.yy / 400== 0)
			hari2=31+29+31+30+31+30+31+t2.dd ;
		else
			hari2=31+28+31+30+31+30+31+t2.dd ;
		break;
		case 9:
		if (t2.yy % 4 == 0 && t2.yy % 100 !=0 || t2.yy / 400== 0)
			hari2=31+29+31+30+31+30+31+31+t2.dd ;
		else
			hari2=31+28+31+30+31+30+31+31+t2.dd ;
		break;
		case 10:
		if (t2.yy % 4 == 0 && t2.yy % 100 !=0 || t2.yy / 400== 0)
			hari2=31+29+31+30+31+30+31+31+30+t2.dd ;
		else
			hari2=31+28+31+30+31+30+31+31+30+t2.dd ;
		break;
		case 11:
		if (t2.yy % 4 == 0 && t2.yy % 100 !=0 || t2.yy / 400== 0)
			hari2=31+29+31+30+31+30+31+31+30+31+t2.dd ;
		else
			hari2=31+28+31+30+31+30+31+31+30+31+t2.dd ;
		break;
		case 12:
		if (t2.yy % 4 == 0 && t2.yy % 100 !=0 || t2.yy / 400== 0)
			hari2=31+29+31+30+31+30+31+31+30+31+30+t2.dd ;
		else
			hari2=31+28+31+30+31+30+31+31+30+31+30+t2.dd ;
		break;
	}
	
	hari3=hari2-hari;
	if (hari3<0)
		hari3=-hari3;
	x= t2.yy-t1.yy;
	if (x<0)
		x=-x;
	y=x/4 ;
	hari3=hari3+ 366*x -y;
	printf ("Selisih hari: %i", hari3);
	
	return 0;
}
