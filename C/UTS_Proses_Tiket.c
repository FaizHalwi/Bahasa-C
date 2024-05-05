//Program Pembuatan Mesan Tiket Bus Primajasa 
//Program ke 2, Ini program proses dalam pemesan tiket
//Table Bus ada di program yang khusus untuk table
//Tugas Uts 
//DEKLARASI PUSTAKA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//VARIABEL 
char ulangi;
char opsi[] = "0";
int jumlah_penumpang = 0;

//DEKLARASI 
struct{				
  char *kode;
  char *kotatujuan;
  int orangdewasa;
  int oranganak;
  int dewasa;
  int anak;
}bus[5];
struct{
  char nik[20];
  char nama[40];
  char tempat_lahir[20];
  char tanggal_lahir[12];
  char kelamin[1];
  char alamat[60];
  char agama[50];
  char nikah[1];
  char kerja[50];
  char negara[50];
  char nomor_telp[20];
}Penumpang[200];

struct{
  int no;
  char *nama;
  char *kodee;
  char *tanggal;
  char berangkat[7];
  char jam_kedatangan[7];
  char kelas_penerbangan[1];
  int penumpang_dewasa;
  int penumpang_anak;
  int harga;
}berangkatan[200];

//DEKLARASI fungsi
void printf_center(char *posisi, char *str, char pemisah, int n);
int akumulasi_harga(int dewasa, int anak, char *kelas, int pilih);
int rata_rata();
int harga_terbesar();
int harga_terkecil();

//DEKLARASI prosedure
void buka_menu();
void isi_data_penumpang();
void isi_data_penerbangan();
void buka_data();
void run();
void mytable(){
  	printf("\n\n");
	printf("                                                    TABLE PEMESANAN TIKET BUS PRIMAJASA                                         \n");
	printf("\n\n");
	printf("+===============================================================================================================================+\n");
	printf("| NO  |              TARYEK                 |            WAKTU                |                HARGA KELAS BUS                  |\n");
	printf("|=====|=========================================================================================================================|\n");
	printf("|     |                                     |   Berangkat   |    Kedatangan   |     Ekonomi    |      Bisnis     |     VIP      |\n");
    printf("|     |                                     |===================================================================================|\n");
    printf("|     |                                     |     07.30     |     09.30       |     120.000    |      150.000    |    200.000   |\n");
    printf("| 1.  | Lebak Bulus - Pasteur               |     10.00     |     12.00       |     120.000    |      150.000    |    200.000   |\n");
    printf("|     |                                     |     13.00     |     15.00       |     120.000    |      150.000    |    200.000   |\n");
    printf("|=====|=========================================================================================================================|\n");
    printf("|     |                                     |     09.30     |     11.30       |     100.000    |      125.000    |    150.000   |\n");
    printf("| 2.  | Kp Rambutan - Pasteur               |     13.00     |     15.30       |     100.000    |      125.000    |    150.000   |\n");
    printf("|     |                                     |     15.30     |     17.30       |     100.000    |      125.000    |    150.000   |\n");
    printf("|=====|=========================================================================================================================|\n");
    printf("|     |                                     |     09.30     |     11.30       |     100.000    |      125.000    |    150.000   |\n");
    printf("| 3.  | Kp Melayu - Pasteur                 |     13.00     |     15.00       |     100.000    |      125.000    |    150.000   |\n");
    printf("|     |                                     |     15.30     |     17.30       |     100.000    |      125.000    |    150.000   |\n");
    printf("|=====|=========================================================================================================================|\n");
    printf("|     |                                     |     07.30     |     09.30       |     120.000    |      150.000    |    200.000   |\n");
    printf("| 4.  | Ps Senen - Pasteur                  |     13.00     |     15.00       |     120.000    |      150.000    |    200.000   |\n");
    printf("|     |                                     |     19.00     |     21.00       |     150.000    |      175.000    |    225.000   |\n");
    printf("|=====|=========================================================================================================================|\n");
    
    
    printf("\n\n");
    printf("                                  GAMBAR DARI SEMUA BUS PRIMAJASA                           \n\n");
	printf("         Bus Ekonomi                        Bus Bisnis                            Bus VIP  \n\n");
    printf("       +=============+                     +===========+                        +=========+\n");
    printf("       |x|x|   |x|x|x|                     |x|x|   |x|x|                        |x|   |x|x|\n");
    printf("       |x|x|   |x|x|x|                     |x|x|   |x|x|                        |x|   |x|x|\n");
    printf("       |x|x|   |x|x|x|                     |x|x|   |x|x|                        |x|   |x|x|\n");
    printf("       |x|x|   |x|x|x|                     |x|x|   |x|x|                        |x|   |x|x|\n");
    printf("       |.............|                     |...........|                        |.........|\n");
    printf("       |x|x|   |x|x|x|                     |x|x|   |x|x|                        |x|   |x|x|\n");
    printf("       |xxxxxxxxxxxxx|                     |xxxxxxxxxxx|                        |xxxxxxxxx|\n");
    printf("       +=============+                     +===========+                        +=========+\n");
}
//ALGORITMA
void main(){
  //DEKLARASI variabel scope
  mytable();
  //DEKLARASI variabel dalam struct
  bus[0].kode = "1). ANGGUR";
  bus[1].kode = "2). MANGGA";
  bus[2].kode = "3). APELL";
  bus[3].kode = "4). SALAK";
  bus[4].kode = "5). MELON";

  	bus[0].kotatujuan = "Lebak Bulus - Pasteur";
  	bus[1].kotatujuan = "Kp Rambutan - Pasteur";
  	bus[2].kotatujuan = "Kp Melayu - Pasteur";
  	bus[3].kotatujuan = "Ps Senen - Pasteur";
  	bus[4].kotatujuan = "Anyer - Pasteur";

  bus[0].orangdewasa = 800000;
  bus[1].orangdewasa = 850000;
  bus[2].orangdewasa = 850000;
  bus[3].orangdewasa = 1000000;
  bus[4].orangdewasa = 1200000;

  	bus[0].oranganak = 600000;
  	bus[1].oranganak = 650000;
  	bus[2].oranganak = 650000;
  	bus[3].oranganak = 800000;
  	bus[4].oranganak = 1000000;

  bus[0].dewasa = 500000;
  bus[1].dewasa = 550000;
  bus[2].dewasa = 550000;
  bus[3].dewasa = 700000;
  bus[4].dewasa = 800000;

  	bus[0].anak = 400000;
  	bus[1].anak = 450000;
  	bus[2].anak = 450000;
  	bus[3].anak = 600000;
  	bus[4].anak = 700000;

  //PROSES memanggil fungsi menu
  run();

  //PROSES keluar dari program
  printf("Terima kasih \n");
}

//PROTOTYPE fungsi akumulasi_harga
int akumulasi_harga(int dewasa, int anak, char *kelas, int pilih){
  int hasil = 0;
  int x;
  if(strcmp(kelas, "b") == 0){
    for(x = 0; x < dewasa; x++){
      hasil += bus[pilih-1].orangdewasa;
    }
    for(x = 0; x < anak; x++){
      hasil += bus[pilih-1].oranganak;
    }
  }else{
    for(x = 0; x < dewasa; x++){
      hasil += bus[pilih-1].dewasa;
    }
    for(x = 0; x < anak; x++){
      hasil += bus[pilih-1].anak;
    }
  }
  return hasil;
}

//PROTOTYPE
void buka_data()
{
  int x;
  int n1 = 4;
  int n2 = 14;
  for(x = 0; x < jumlah_penumpang; x++){
    if(strlen(berangkatan[x].nama)+2 > n2){
      n2 = strlen(berangkatan[x].nama)+2;
    }
  }
  int n3 = 9;
  int n4 = 10;
  int n5 = 15;
  int n6 = 12;
  char format[50];
  printf_center("+%s+\n", "-", '-', (n1+n2+n3+n3+n3+n3+n3+n4+n5+n6)+17);
  printf_center( "|%s|", "No", ' ', n1);
  printf_center( "%s|", "Pembeli", ' ', n2);
  printf_center( "%s |", "Kode", ' ', n3);
  printf_center( "%s |", "Tanggal", ' ', n4);
  printf_center( "%s |", "berangkat bus", ' ', n5);
  printf_center( "%s |", "pulang bus", ' ', n6);
  printf_center( "%s |", "Kelas", ' ', n3);
  printf_center( "%s |", "Dewasa", ' ', n3);
  printf_center( "%s |", "Anak", ' ', n3);
  printf_center( "%s |\n", "Harga", ' ', n3);
  printf_center("+%s+\n", "-", '-', (n1+n2+n3+n3+n3+n3+n3+n4+n5+n6)+17);
  for(x = 0; x < jumlah_penumpang; x++){
    sprintf(format, "%i", berangkatan[x].no);
    printf_center( "|%s|", format, ' ', n1);
    printf_center( "%s|", berangkatan[x].nama, ' ', n2);
    printf_center( "%s |", berangkatan[x].kodee, ' ', n3);
    printf_center( "%s |", berangkatan[x].tanggal, ' ', n4);
    printf_center( "%s |", berangkatan[x].berangkat, ' ', n5);
    printf_center( "%s |", berangkatan[x].jam_kedatangan, ' ', n6);
    printf_center( "%s |", berangkatan[x].kelas_penerbangan, ' ', n3);
    sprintf(format, "%i", berangkatan[x].penumpang_dewasa);
    printf_center( "%s |", format, ' ', n3);
    sprintf(format, "%i", berangkatan[x].penumpang_anak);
    printf_center( "%s |", format, ' ', n3);
    sprintf(format, "%i", berangkatan[x].harga);
    printf_center( "%s |\n", format, ' ', n3);
  }
  printf_center("+%s+\n", "-", '-', (n1+n2+n3+n3+n3+n3+n3+n4+n5+n6)+17);
}

//PROTOTYPE printf center
void printf_center(char *posisi, char *str, char pemisah, int n)
{
  //VARIABEL
  char hasil[n];
  int x;
  int nilai_tengah = (n-strlen(str))/2;

  //perulangan banyak nilai tengah
  for(x = 0; x < nilai_tengah; x++){
    hasil[x] = pemisah;
    hasil[(x+nilai_tengah+strlen(str))] = pemisah;
  }
  //perulangan sebanyak string 
  for(x = 0; x < strlen(str); x++){
    hasil[(x+nilai_tengah)] = *(str+x);
  }
  //deklarasi bahwa variabel hasil
  if(nilai_tengah*2+strlen(str) != n){
    hasil[n-1] = pemisah;
  }
  hasil[n] = '\0';

  //output
  printf(posisi, hasil);
}

//PROTOTYPE prosedure buka_menu

void buka_menu()
{
  //DEKLARASI variabel scope
  int n = 50;

  //PROSES output
  printf_center("\n\n|%s|\n", "=> PEMESAN TIKET BUS PRIMAJASA <=", '=', n);
  printf_center("\n\n|%s|\n", "1. Pesan tiket penerbangan bus", ' ', n);
  printf_center("\n\n|%s|\n", "2. Lihat jadwal penerbangan yang sudah di pesan", ' ', n);
  printf_center("\n\n|%s|\n", "3. Selesai dan keluar", ' ', n);
  printf("\n\n|==================================================|\n");
  printf("\n\n Hayooo Pilih Yang MANA...Xixi");
  printf("\n\n=> Pilih menu yang anda inginkan (1/2/3) : ");
  scanf("%s", &opsi);
  if(strcmp(opsi, "1") == 1 && strcmp(opsi, "2") == 1 && strcmp(opsi, "3") == 1){
    printf("harap memasukan dengan sesuai ! \n");
    buka_menu();
  }
}

//PROTOTYPE prosedure isi_data_penumpang
void isi_data_penumpang()
{
  //PROSES input
  printf("| ======================= Sebelum melaksanakan pembelian tiket =========================== |\n| pelanggan disarankan untuk mengisi data diri anda dahulu untuk keamanan data penerbangan |\n\n");
  do{
    printf("=> Silahkan masukan NIK anda (9 digit): "); 
	scanf("%s", Penumpang[jumlah_penumpang].nik);
  }while(strlen(Penumpang[jumlah_penumpang].nik)!=9);

  printf("=> Masukan nama : "); 
  scanf("%s", Penumpang[jumlah_penumpang].nama);
  printf("=> Masukan tanggal lahir (tanggal-bulan-tahun): ");
  scanf("%s", Penumpang[jumlah_penumpang].tanggal_lahir);
  printf("=> Masukan tempat lahir: ");
  scanf("%s", Penumpang[jumlah_penumpang].tempat_lahir);

  printf("=> Agama Yang di Ikuti: ");
  scanf("%s", Penumpang[jumlah_penumpang].agama);

  do{
    printf("=> Jenis kelamin (L/P): ");
    scanf("%s", Penumpang[jumlah_penumpang].kelamin);
  }while(strcmp(Penumpang[jumlah_penumpang].kelamin, "L") != 0 && strcmp(Penumpang[jumlah_penumpang].kelamin, "P") != 0);

  do{
    printf("=> Apakah anda sudah menikah? (Y/N): ");
    scanf("%s", Penumpang[jumlah_penumpang].nikah);
  }while(strcmp(Penumpang[jumlah_penumpang].nikah, "Y") != 0 && strcmp(Penumpang[jumlah_penumpang].nikah, "N") != 0);

  printf("=> Tinggal di Negara: ");
  scanf("%s", Penumpang[jumlah_penumpang].negara);

  printf("=> Pekerjaan anda: ");
  scanf("%s", Penumpang[jumlah_penumpang].kerja);

  printf("=> Masukan Nomor HandPhone: ");
  scanf("%s", Penumpang[jumlah_penumpang].nomor_telp);
}

//PROTOTYPE prosedure isi_data_penerbangan
void isi_data_penerbangan(){
  int x;
  int pilih;
  int n1 = 29;
  int n2 = 25;
  int n3 = 9;
  char format[50];
  printf_center("+%s+\n", "-", '-', (n1+n2+n3+n3+n3+n3)+5);
  printf_center( "|%s|", "Kode Penerbangan", ' ', n1);
  printf_center( "%s|", "Kota Tujuan", ' ', n2);
  printf_center( "%s |", "Tiket Bisnis", ' ', n3*2);
  printf_center( "%s |\n", "Tiket Ekonomi", ' ', n3*2);

  printf_center( "|%s|", " ", ' ', n1);
  printf_center( "%s|", " ", ' ', n2);
  printf_center( "%s|", "Dewasa", ' ', n3);
  printf_center( "%s|", "Anak", ' ', n3);
  printf_center( "%s|", "Dewasa", ' ', n3);
  printf_center( "%s|\n", "Anak", ' ', n3);
  printf_center("+%s+\n", "-", '-', (n1+n2+n3+n3+n3+n3)+5);
  
  for(x = 0; x < 5; x++){
    printf_center("|%s|", bus[x].kode, ' ', n1);
	printf_center("%s|", bus[x].kotatujuan, ' ', n2);

    sprintf(format, "%i", bus[x].orangdewasa);
    	printf_center("%s|", format, ' ', n3);

    sprintf(format, "%i", bus[x].oranganak);
    	printf_center("%s|", format, ' ', n3);

    sprintf(format, "%i", bus[x].dewasa);
    	printf_center("%s|", format, ' ', n3);

    sprintf(format, "%i", bus[x].anak);
    	printf_center("%s|\n", format, ' ', n3);
  }
  printf_center("+%s+\n", "-", '-', (n1+n2+n3+n3+n3+n3)+5);
  berangkatan[jumlah_penumpang].no = jumlah_penumpang+1;
  berangkatan[jumlah_penumpang].nama = Penumpang[jumlah_penumpang].nama;
  
  do{
    printf("Silahkan pilih tujuan keberangkatan anda (1/2/3/4/5): ");
    scanf("%i", &pilih);
  }while(pilih < 1 || pilih > 5);
  berangkatan[jumlah_penumpang].kodee = bus[pilih].kode;
  
  // time_t t = time(NULL);
  // struct tm 
  // sprintf%d-%02d-%02d
  berangkatan[jumlah_penumpang].tanggal = "format";
  printf("Masukan jam keberangkatan pesawat(jam:menit): ");
  scanf("%s", berangkatan[jumlah_penumpang].berangkat);
  printf("Masukan jam kedatangan pesawat (jam:menit): ");
  scanf("%s", berangkatan[jumlah_penumpang].jam_kedatangan);

  do{
    printf("Pilih kelas penerbangan (b/e): ");
    scanf("%s", berangkatan[jumlah_penumpang].kelas_penerbangan);
  }while(strcmp(berangkatan[jumlah_penumpang].kelas_penerbangan, "b") != 0 && strcmp(berangkatan[jumlah_penumpang].kelas_penerbangan, "e") != 0);

  do{
    printf("Silahkan Masukan jumlah penumpang dewasa (d < 4): ");scanf("%i", &berangkatan[jumlah_penumpang].penumpang_dewasa);
  }while(berangkatan[jumlah_penumpang].penumpang_dewasa > 4 || berangkatan[jumlah_penumpang].penumpang_dewasa < 0);

  berangkatan[jumlah_penumpang].penumpang_anak = 0;
  while(berangkatan[jumlah_penumpang].penumpang_dewasa + berangkatan[jumlah_penumpang].penumpang_anak > 4|| berangkatan[jumlah_penumpang].penumpang_dewasa + berangkatan[jumlah_penumpang].penumpang_anak < 0){
    printf("Silahkan Masukan jumlah penumpang anak anak (d+a < 4): ");scanf("%i", &berangkatan[jumlah_penumpang].penumpang_anak);
  }

  berangkatan[jumlah_penumpang].harga = akumulasi_harga(berangkatan[jumlah_penumpang].penumpang_dewasa, berangkatan[jumlah_penumpang].penumpang_anak, berangkatan[jumlah_penumpang].kelas_penerbangan, pilih);
  printf("%i\n\n", berangkatan[jumlah_penumpang].harga);
}

//prosedure run
void run()
{
  strcpy(opsi, "0");
  buka_menu();
  printf("\n\n");
  
  if(strcmp(opsi, "1") == 0){
    isi_data_penumpang();
    printf("\n\n");
    isi_data_penerbangan();
    printf(" Terima kasih silahkan datang kembali dan semoga selamat sampai tujuan %s :)) \n", Penumpang[jumlah_penumpang].nama);
    jumlah_penumpang++;
    printf("\n\n");
    run();
  
  }
  
  else if(strcmp(opsi, "2") == 0){
    buka_data();
    run();
  }
}

