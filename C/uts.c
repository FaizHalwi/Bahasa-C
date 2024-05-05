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
  char *kode_penerbangan;
  char *kota_tujuan;
  int bisnis_dewasa;
  int bisnis_anak;
  int ekonomi_dewasa;
  int ekonomi_anak;
}Airline[5];
struct{
  char nik[20];
  char nama[40];
  char tempat_lahir[20];
  char tanggal_lahir[12];
  char kelamin[1];
  char alamat[60];
  char agama[50];
  char pernikahan[1];
  char pekerjaan[50];
  char kewarganegaraan[50];
  char nomor_telp[20];
}Penumpang[200];

struct{
  int no;
  char *nama;
  char *kode_penerbangan;
  char *tanggal;
  char jam_keberangkatan[7];
  char jam_kedatangan[7];
  char kelas_penerbangan[1];
  int penumpang_dewasa;
  int penumpang_anak;
  int harga;
}Penerbangan[200];

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

//ALGORITMA
void main(){
  //DEKLARASI variabel scope

  //DEKLARASI variabel dalam struct
  Airline[0].kode_penerbangan = "PAL0001";
  Airline[1].kode_penerbangan = "PAL0002";
  Airline[2].kode_penerbangan = "PAL0003";
  Airline[3].kode_penerbangan = "PAL0004";
  Airline[4].kode_penerbangan = "PAL0005";

  Airline[0].kota_tujuan = "Bali";
  Airline[1].kota_tujuan = "Aceh";
  Airline[2].kota_tujuan = "Jakarta";
  Airline[3].kota_tujuan = "Malang";
  Airline[4].kota_tujuan = "Sumedang";

  Airline[0].bisnis_dewasa = 800000;
  Airline[1].bisnis_dewasa = 850000;
  Airline[2].bisnis_dewasa = 850000;
  Airline[3].bisnis_dewasa = 1000000;
  Airline[4].bisnis_dewasa = 1200000;

  Airline[0].bisnis_anak = 600000;
  Airline[1].bisnis_anak = 650000;
  Airline[2].bisnis_anak = 650000;
  Airline[3].bisnis_anak = 800000;
  Airline[4].bisnis_anak = 1000000;

  Airline[0].ekonomi_dewasa = 500000;
  Airline[1].ekonomi_dewasa = 550000;
  Airline[2].ekonomi_dewasa = 550000;
  Airline[3].ekonomi_dewasa = 700000;
  Airline[4].ekonomi_dewasa = 800000;

  Airline[0].ekonomi_anak = 400000;
  Airline[1].ekonomi_anak = 450000;
  Airline[2].ekonomi_anak = 450000;
  Airline[3].ekonomi_anak = 600000;
  Airline[4].ekonomi_anak = 700000;

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
      hasil += Airline[pilih-1].bisnis_dewasa;
    }
    for(x = 0; x < anak; x++){
      hasil += Airline[pilih-1].bisnis_anak;
    }
  }else{
    for(x = 0; x < dewasa; x++){
      hasil += Airline[pilih-1].ekonomi_dewasa;
    }
    for(x = 0; x < anak; x++){
      hasil += Airline[pilih-1].ekonomi_anak;
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
    if(strlen(Penerbangan[x].nama)+2 > n2){
      n2 = strlen(Penerbangan[x].nama)+2;
    }
  }
  int n3 = 9;
  int n4 = 10;
  int n5 = 15;
  int n6 = 12;
  char format[50];
  printf_center("+%s+\n", "-", '-', (n1+n2+n3+n3+n3+n3+n3+n4+n5+n6)+9);
  printf_center( "|%s|", "No", ' ', n1);
  printf_center( "%s|", "Nama Pembeli Tiket", ' ', n2);
  printf_center( "%s |", "Masukan Kode", ' ', n3);
  printf_center( "%s |", "Masukan Tanggal", ' ', n4);
  printf_center( "%s |", "Keberangkatan Pesawat", ' ', n5);
  printf_center( "%s |", "Kepulangan Pesawat", ' ', n6);
  printf_center( "%s |", "Masukan Kelas", ' ', n3);
  printf_center( "%s |", "Dewasa", ' ', n3);
  printf_center( "%s |", "Anak", ' ', n3);
  printf_center( "%s |\n", "Masukan Harga", ' ', n3);
  printf_center("+%s+\n", "-", '-', (n1+n2+n3+n3+n3+n3+n3+n4+n5+n6)+17);
  for(x = 0; x < jumlah_penumpang; x++){
    sprintf(format, "%i", Penerbangan[x].no);
    printf_center( "|%s|", format, ' ', n1);
    printf_center( "%s|", Penerbangan[x].nama, ' ', n2);
    printf_center( "%s |", Penerbangan[x].kode_penerbangan, ' ', n3);
    printf_center( "%s |", Penerbangan[x].tanggal, ' ', n4);
    printf_center( "%s |", Penerbangan[x].jam_keberangkatan, ' ', n5);
    printf_center( "%s |", Penerbangan[x].jam_kedatangan, ' ', n6);
    printf_center( "%s |", Penerbangan[x].kelas_penerbangan, ' ', n3);
    sprintf(format, "%i", Penerbangan[x].penumpang_dewasa);
    printf_center( "%s |", format, ' ', n3);
    sprintf(format, "%i", Penerbangan[x].penumpang_anak);
    printf_center( "%s |", format, ' ', n3);
    sprintf(format, "%i", Penerbangan[x].harga);
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
  printf_center("+%s+\n", "Perkutut Airline", '-', n);
  printf_center("|%s|\n", "1. Pesan tiket", ' ', n);
  printf_center("|%s|\n", "2. Lihat jadwal penerbangan yang sudah di pesan", ' ', n);
  printf_center("|%s|\n", "3. Selesai", ' ', n);
  printf_center("+%s+\n", "-", '-', n);
  printf("Silahkan di pilih menu [1/2/3]: ");
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
  printf("Sebelum melaksanakan pembelian tiket, pelanggan disarankan untuk mengisi data diri anda dahulu untuk keamanan data penerbangan\n");
  do{
    printf("a) Silahkan asukan NIK anda (10 digit): "); 
	scanf("%s", Penumpang[jumlah_penumpang].nik);
  }while(strlen(Penumpang[jumlah_penumpang].nik)!=10);

  printf("b) Masukan nama : "); 
  scanf("%s", Penumpang[jumlah_penumpang].nama);
  printf("%s\n", Penumpang[jumlah_penumpang].nama);
  printf("c) Masukan tempat lahir: ");
  scanf("%s", Penumpang[jumlah_penumpang].tempat_lahir);
  printf("d) Masukan tanggal lahir (tanggal-bulan-tahun): ");
  scanf("%s", Penumpang[jumlah_penumpang].tanggal_lahir);

  do{
    printf("e) Jenis kelamin (L/P): ");
    scanf("%s", Penumpang[jumlah_penumpang].kelamin);
  }while(strcmp(Penumpang[jumlah_penumpang].kelamin, "l") != 0 && strcmp(Penumpang[jumlah_penumpang].kelamin, "p") != 0);

  printf("f) Agama Yang di Ikuti: ");
  scanf("%s", Penumpang[jumlah_penumpang].agama);

  do{
    printf("g) Apakah anda sudah menikah? (Y/N): ");
    scanf("%s", Penumpang[jumlah_penumpang].pernikahan);
  }while(strcmp(Penumpang[jumlah_penumpang].pernikahan, "y") != 0 && strcmp(Penumpang[jumlah_penumpang].pernikahan, "n") != 0);

  printf("h) Pekerjaan anda: ");
  scanf("%s", Penumpang[jumlah_penumpang].pekerjaan);

  printf("i) Tinggal di Negara: ");
  scanf("%s", Penumpang[jumlah_penumpang].kewarganegaraan);

  printf("j) Masukan Nomor HandPhone: ");
  scanf("%s", Penumpang[jumlah_penumpang].nomor_telp);
}

//PROTOTYPE prosedure isi_data_penerbangan
void isi_data_penerbangan(){
  int x;
  int pilih;
  int n1 = 18;
  int n2 = 12;
  int n3 = 9;
  char format[50];
  printf_center("+%s+\n", "-", '-', (n1+n2+n3+n3+n3+n3)+5);
  printf_center( "|%s|", "Silahkan Masukan Kode Penerbangan", ' ', n1);
  printf_center( "%s|", "Kota Yang Anda Tuju", ' ', n2);
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
    printf_center("|%s|", Airline[x].kode_penerbangan, ' ', n1);

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
    printf("Silahkan pilih tujuan penerbangan anda (1/2/3/4/5): ");
    scanf("%i", &pilih);
  }while(pilih < 1 || pilih > 5);
  Penerbangan[jumlah_penumpang].kode_penerbangan = Airline[pilih].kode_penerbangan;
  
  // time_t t = time(NULL);
  // struct tm 
  // sprintf%d-%02d-%02d, tm.tm_mday+1900, tm.tm_mon+1, tm.tm_year
  Penerbangan[jumlah_penumpang].tanggal = "format";
  printf("Masukan jam keberangkatan pesawat(jam:menit): ");
  scanf("%s", Penerbangan[jumlah_penumpang].jam_keberangkatan);
  printf("Masukan jam kedatangan pesawat (jam:menit): ");
  scanf("%s", Penerbangan[jumlah_penumpang].jam_kedatangan);

  do{
    printf("Pilih kelas penerbangan (b/e): ");
    scanf("%s", Penerbangan[jumlah_penumpang].kelas_penerbangan);
  }while(strcmp(Penerbangan[jumlah_penumpang].kelas_penerbangan, "b") != 0 && strcmp(Penerbangan[jumlah_penumpang].kelas_penerbangan, "e") != 0);

  do{
    printf("Silahkan Masukan jumlah penumpang dewasa (d < 4): ");scanf("%i", &Penerbangan[jumlah_penumpang].penumpang_dewasa);
  }while(Penerbangan[jumlah_penumpang].penumpang_dewasa > 4 || Penerbangan[jumlah_penumpang].penumpang_dewasa < 0);

  Penerbangan[jumlah_penumpang].penumpang_anak = 0;
  while(Penerbangan[jumlah_penumpang].penumpang_dewasa + Penerbangan[jumlah_penumpang].penumpang_anak > 4|| Penerbangan[jumlah_penumpang].penumpang_dewasa + Penerbangan[jumlah_penumpang].penumpang_anak < 0){
    printf("Silahkan Masukan jumlah penumpang anak anak (d+a < 4): ");scanf("%i", &Penerbangan[jumlah_penumpang].penumpang_anak);
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
