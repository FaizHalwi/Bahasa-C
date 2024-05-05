#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char ulangi ;
char opsi[]="0";
int jumlah_penumpang = 0;

struct {
	char *kode_perulangan;
	char *kota_tujuan;
	int bisnis_dewasa;
	int bisnis_anak;
	int ekonomi_dewasa;
	int ekonomi_anak;	
}airline[5];
struct{
	char nik[20]; 
	char nama[40];
	char tempat_lahir[20];
	char tanggal_lahir[12];
	char kelamin[1];
	char alamat[60];
	char agama[50];
	char pernikahan[50];
	char pekerjaan[50];
	char kewarganegraan[50];
	char nomor_telp[20];
}penumpang[200];

struct{
	int no;
	char *nama;
	char *kode_penerbangan;
	char *tanggal;
	char jam_keberangkatan[7];
	char jam_kedatangan[7];
	char kelas_penerbangan[1]
	int penumpang_dewasa;
	int penumpang_anak;
	int harga;
}penerbangan[200];

void printf_center(char*posisi, char *str, char pemisah, int n);
int akumulasi_harga(int dewasa, int anak, char *kelas, int pilih);
int rata_rata();
int harga_terbesar();
int harga_terkecil();

void buka_menu();
void isi_data_penumpang();
void isi_data_penerbangan();
void buka_data();
void run();

void main (){
	airline[0].kode_penerbangan="PAL0001";
	airline[1].kode_penerbangan="PAL0002";
	airline[2].kode_penerbangan="PAL0003";
	airline[3].kode_penerbangan="PAL0004";
	airline[4].kode_penerbangan="PAL0005";
	
	airline [0].kota_tujuan="semarang";
	airline [1].kota_tujuan="solo";
	airline [2].kota_tujuan="yogyakarta";
	airline [3].kota_tujuan="surabaya";
	airline [4].kota_tujuan="bali";
	
	airline [0].bisnis_dewasa= 800000;
	airline [1].bisnis_dewasa= 850000;
	airline [2].bisnis_dewasa= 850000;
	airline [3].bisnis_dewasa= 8000000;
	airline [4].bisnis_dewasa= 1200000;
	
	airline [0].bisnis_anak= 600000;
	airline [1].bisnis_anak= 650000;
	airline [2].bisnis_anak= 650000;
	airline [3].bisnis_anak= 700000;
	airline [4].bisnis_anak= 800000;
	
	airline [0].ekonomi_dewasa= 500000;
	airline [1].ekonomi_dewasa= 5500000;
	airline [2].ekonomi_dewasa= 5500000;
	airline [3].ekonomi_dewasa= 700000;
	airline [4].ekonomi_dewasa= 800000;
	
	airline [0].ekonomi_anak= 400000;
	airline [1].ekonomi_anak= 450000;
	airline [2].ekonomi_anak= 450000;
	airline [3].ekonomi_anak= 600000;
	airline [4].ekonomi_anak= 700000;
	
	run();
	
	printf("terima kasih \n")
	
}

int akumulasi_harga(int dewasa, int anak, char*kelas, int pilih){
	int hasil =0;
	int x;
	if(strcmp(kelas, "b") == 0){
		for (x=0; x < dewasa; x++){
			hasil += airline [pili-1]. bisnis_dewasa;
		}
		for (x=0; x < dewasa; x++){
			hasil += airline [pili-1]. bisnis_dewasa;
	}	
}else{
	  	for (x=0; x < dewasa; x++){
			hasil += airline [pili-1]. bisnis_dewasa;
}
		for (x=0; x < dewasa; x++){
			hasil += airline [pili-1]. bisnis_dewasa;
	}
}
return hasil;		
}


void buka_data()
{
	int x;
	int n1 = 4:
	int n2 = 14;
	for (x=0; x < jumlah_penumpang; x++){
		if (strlen(penerbangan[x].nama)+2){
			n2=strlen(penerbangan[x].nama)+2;
		}
	}
	int n3=9;
	int n4=10;
	int n5=15;
	int n6=12;
	char format[50];
	printf_center("+%s+\n", "-", '-', (n1+n2+n3+n3+n3+n3+n3+n4+n5+n6)+9);
	printf_center("|%s|", "no",'',n1);
	printf_center("%s|", "nama pembeli",'',n2);
	printf_center("%s|", "kode",'',n3);
	printf_center("%s|", "tanggal",'',n4);
	printf_center("%s|", "keberangkatan",'',n5);
	printf_center("%s|", "kepulangan",'',n6);
	printf_center("%s|", "kelas",'',n3);
	printf_center("%s|", "dewasa",'',n3);
	printf_center("%s|", "anak",'',n3);
	printf_center("%s|\n", "harga",'',n3);
	printf_center("+%s+\n", "-",'-',(n1+n2+n3+n3+n3+n3+n3+n4+n5+n6)+9);
	for(x=0; x < jumlah_penumpang; x++){
		sprintf(format, "%i", penerbangan [x].no);
		printf_center("|%s|", format, '',n1);
		printf_center("|%s|", penerbangan[x].nama, '',n2);
		printf_center("|%s|", penerbangan[x].kode_penerbangan, '',n3);
		printf_center("|%s|", penerbangan[x].tanggal, '',n4);
		printf_center("|%s|", penerbangan[x].jam_keberangkatan, '',n5);
		printf_center("|%s|", penerbangan[x].jam_kedatangan, '',n6);
		printf_center("|%s|", penerbangan[x].kelas_penerbangan, '',n3);
		sprintf(format, "%i", penerbangan[x].penumpang_dewasa);
 		printf_center("%s |",format,'', n3);
		sprintf(format, "%i", penerbangan[x].penumpang_dewasa);
		printf_center("%s |",format,'', n3);
		sprintf(format, "%i", penerbangan[x].penumpang_dewasa);
		printf_center("%s |\n",format,'', n3);
	}
	printf_center("+%s+\n","-",'-', (n1+n2+n3+n3+n3+n3+n3+n4+n5+n6)+9);
_}

void printf_center(char *posisi, cahr*str, char pemisah, int n)
{
	char hasil [n];
	int x;
	int nilai_tengah=(n-strlen(str))/2;
	
	for(x+0; x < nilai_tengah; x++){
		hasil [x]+pemisah;
		hasil[(x+nilai_tengah+strlen(str))=pemisah
	}
	for (x=0; x <strlen (str); x++){
		hasil [(x+nilai_tengah)]=*(str+x);
	}
	if (nilai_tengah*2+strlen(str) !=n){
		hasil[n-1]=pemisah;
	}
	hasil[n]='\0';
	
	printf(posisi, hasil);
}

void buka_menu()
{
	int n=50;
	
	printf_center ("+%s+\n", "perkutut airline", '-', n);
	printf_center ("|%s|\n", "1. beli tiket", '', n);
	printf_center ("|%s|\n", "1. lihat data penerbangan", '', n);
	printf_center ("|%s|\n", "3. keluar", '', n);
	printf_center ("+%s+\n", "1. beli tiket", '', n);
	printf("pilih opsi menu [1/2/3]:");
	scanf("%s", &opsi);
	if (strcmp(opsi, "1")== 1&& strcmp(opsi, "2")== 1&& strcmp(opsi, "3"== 1)){
		printf("harap memasukan input yang sesuai\n");
		buka_menu();	
	}
}

void isi_data_penumpang()
{
	
	printf("sebelum melakukan pembelian tiket, pelangkan di haruskan untuk mengisi data diri terlebih dahulu demi keamanan data penerbangan\n ");
	do{
		printf("a) masukan nik anda (10 digit):");
			scanf("%s", penumpang[jumlah_penumpang].agama nik);
		}while (strlen (penumpang[jumlah_penumpang].nik)!=10);
		
		printf("b)nama:");
		scanf("%s", penumpang[jumlah_penumpang].nama);
		
		printf("%s\n", penumpang[jumlah_penumpang].nama);
		
		printf("c) tempat lahir:");
		scanf("%s", penumpang[jumlah_penumpang].tempat_lahir);
		
		printf("d) tanggal lahir (dd-mm-yyyy):");
		scanf("%s", penumpang[jumlah_penumpang].tanggal_lahir);
		
		do{
			printf("e) jenis kelamin (l/p):");
			scanf("%s", penumpang [jumlah_penumpang].kelamin);
		}while (strcmp(penumpang[jumlah_penumpang].kelamin,"l")!+0 && strcmp(penumpang[jumlah_penumpang].kelamin,"p")!=0);
		
		printf("f) agama: ");
		scanf("%s", penumaong [jumlah_penumpang].agama);
		
		do{
			printf("g) sudah menikah? (y/n):");
			scanf ("%s", penumpang[jumlah_penumpang].pernikahan
		}while (strcmp(penumpang[jumlah _penumpang].pernnikan, , "y") !=0&& strcmp(penumpang[jumlah_penumpang].agama pernikahan, "n")!+0);
	
		printf("h) pekerjaan:");
		scanf("%s", penumpang [ jumlah_penumpang].pekerjaan);
		
		printf("i) kewarganegaraan:");
		scanf("%s", penumpang [ jumlah_penumpang].kewarganegaraan);
		
		printf("h) nomor handphone:");
		scanf("%s", penumpang [ jumlah_penumpang].no.telp);
		
void isi_data_penerbangan(){
	int x;
	int pilih;
	int n1=18;
	int n2=12;
	int n3=9;
	char format[50];
	printf_center("+%s+\n", "-", '-', (n1+n2+n3+n3+n3+n3)+5);
	printf_center("|%s|", "kota penerbangan", '',n1);
	printf_center("|%s|", "kota tujuan", '',n2);
	printf_center("|%s|", "tiket bisnis", '',n3);
	printf_center("|%s|", "tiket ekonomi", '',n3*2);
	
	printf_center("|%s|", "",'', n1);
	printf_center("%s|","",'',n2);
	printf_center("%s|","dewasa ",'',n3);
	printf_center("%s|","anak",'',n3);
	printf_center("%s|","dewasa",'',n3);
	printf_center("%s|","anak",'',n3);
	printf_center("+&s+\n","-",'-',(n1+n2+n3+n3+n3+n3)+5);
	for(x=0x<5;x++){
		printf_center ("|%s|", Airline[x].kode_penerbangan, ' ', n1);

    printf_center("%s|", Airline[x].kota_tujuan, ' ', n2);

    sprintf(format, "%i", Airline[x].bisnis_dewasa);
    printf_center("%s|", format, ' ', n3);

    sprintf(format, "%i", Airline[x].bisnis_anak);
    printf_center("%s|", format, ' ', n3);

    sprintf(format, "%i", Airline[x].ekonomi_dewasa);
    printf_center("%s|", format, ' ', n3);

    sprintf(format, "%i", Airline[x].ekonomi_anak);
    printf_center("%s|\n", format, ' ', n3);
  }
  printf_center("+%s+\n", "-", '-', (n1+n2+n3+n3+n3+n3)+5);

  Penerbangan[jumlah_penumpang].no = jumlah_penumpang+1;
  
  Penerbangan[jumlah_penumpang].nama = Penumpang[jumlah_penumpang].nama;
  
  do{
    printf("pilih tujuan penerbangan anda (1/2/3/4/5): ");
    scanf("%i", &pilih);
  }while(pilih < 1 || pilih > 5);

  Penerbangan[jumlah_penumpang].kode_penerbangan = Airline[pilih].kode_penerbangan;
  
  // time_t t = time(NULL);
  // struct tm tm = *localtime(&t);
  // sprintf(format, "%d-%02d-%02d", tm.tm_mday+1900, tm.tm_mon+1, tm.tm_year);
  Penerbangan[jumlah_penumpang].tanggal = "format";

  printf("masukan jam keberangkatan(jj:mm): ");
  scanf("%s", Penerbangan[jumlah_penumpang].jam_keberangkatan);

  printf("masukan jam kedatangan(jj:mm): ");
  scanf("%s", Penerbangan[jumlah_penumpang].jam_kedatangan);

  do{
    printf("pilih kelas penerbangan (b/e): ");
    scanf("%s", Penerbangan[jumlah_penumpang].kelas_penerbangan);
  }while(strcmp(Penerbangan[jumlah_penumpang].kelas_penerbangan, "b") != 0 && strcmp(Penerbangan[jumlah_penumpang].kelas_penerbangan, "e") != 0);

  do{
    printf("masukan jumlah penumpang dewasa (d < 4): ");scanf("%i", &Penerbangan[jumlah_penumpang].penumpang_dewasa);
  }while(Penerbangan[jumlah_penumpang].penumpang_dewasa > 4 || Penerbangan[jumlah_penumpang].penumpang_dewasa < 0);

  Penerbangan[jumlah_penumpang].penumpang_anak = 0;
  while(Penerbangan[jumlah_penumpang].penumpang_dewasa + Penerbangan[jumlah_penumpang].penumpang_anak > 4|| Penerbangan[jumlah_penumpang].penumpang_dewasa + Penerbangan[jumlah_penumpang].penumpang_anak < 0){
    printf("masukan jumlah penumpang anak anak (d+a < 4): ");scanf("%i", &Penerbangan[jumlah_penumpang].penumpang_anak);
  }

  Penerbangan[jumlah_penumpang].harga = akumulasi_harga(Penerbangan[jumlah_penumpang].penumpang_dewasa, Penerbangan[jumlah_penumpang].penumpang_anak, Penerbangan[jumlah_penumpang].kelas_penerbangan, pilih);
  printf("%i\n\n", Penerbangan[jumlah_penumpang].harga);
}

//PROTOTYPE prosedure run
void run()
{
  strcpy(opsi, "0");
  buka_menu();
  printf("\n\n");
  if(strcmp(opsi, "1") == 0){
    isi_data_penumpang();
    printf("\n\n");
    isi_data_penerbangan();
    printf("Semoga perjalanan anda menyenangkan tuan %s ^ ^\n", Penumpang[jumlah_penumpang].nama);
    jumlah_penumpang++;
    printf("\n\n");
    run();
  }
  else if(strcmp(opsi, "2") == 0){
    buka_data();
    run();
  }
}
	
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}


