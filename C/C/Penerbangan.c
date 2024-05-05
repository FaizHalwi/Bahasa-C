#include <stdio.h>

typedef struct {
	int dd, mm, yy;
	} tanggalLahir;
typedef struct {
	int dd, mm, yy;
	} tanggalBerangkat;
typedef struct {
	char kotaBerangkat[50]; 
	char kotaTujuan [50];
	char nama [50];
	tanggalLahir tanggalLahir;
	tanggalBerangkat tanggalBerangkat;
} keberangkatan ;

keberangkatan k;
int harga=100;
int umur;

int main(){
	printf("Kota berangkat: ");
	scanf("%s", &k.kotaBerangkat);
	printf("Kota Tujuan: ");
	scanf("%s", &k.kotaTujuan);
	printf("Nama: ");
	scanf("%s", &k.nama);	
	printf("Tanggal Lahir: ");
	scanf("%i", &k.tanggalLahir.dd);
	printf("Bulan Lahir: ");
	scanf("%i", &k.tanggalLahir.mm);	
	printf("Tahun Lahir: ");
	scanf("%i", &k.tanggalLahir.yy);
	printf("Tanggal Berangkat: ");
	scanf("%i", &k.tanggalBerangkat.dd);
	printf("Bulan Berangkat: ");
	scanf("%i", &k.tanggalBerangkat.mm);	
	printf("Tahun Berangkat: ");
	scanf("%i", &k.tanggalBerangkat.yy);
	printf("Harga Tiket: ");
	scanf("%i", &harga);
		
	umur= k.tanggalBerangkat.yy-k.tanggalLahir.yy;
	
	if (umur<12)
		harga=harga*0.75;
	else
		harga=harga*1;
	
	
	printf("Pelanggan atas nama %s pada tanggal %i/%i/%i dari kota %s menuju kota %s berumur %i wajib membayar %i", 
	k.nama, k.tanggalBerangkat.dd, k.tanggalBerangkat.mm, k.tanggalBerangkat.yy, k.kotaBerangkat, k.kotaTujuan, umur, harga);
	
	
	return 0;
}
