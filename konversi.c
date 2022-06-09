#include <stdio.h>
#include <stdlib.h>

/* Menampilkan waktu berupa tanggal saat kurs diambil
 * I.S. : Waktu belum tampil
 * F.S. : Waktu sudah ditampilkan
 */
void tanggalKurs(){
	printf("\t\t Kurs Transaksi ini berdasarkan Bank Indonesia pada tanggal 20 Mei 2022\n");
}

/* Mengubah Rupiah ke Dollar
 * I.S. : Mata uang masih berjenis Rupiah
 * F.S. : Mata uang sudah dikonversi menjadi Dollar
 */
void convertRupiahtoDollar(){
	float kursJual = 14804.66;
	float kursBeli = 14657.35;
	float nilaiRupiah;
	float hasilKursBeli;
	float hasilKursJual;
	printf("\t\t Masukkan Nilai Dalam Rupiah :");
	scanf("%f",&nilaiRupiah);
	fflush(stdin);
	hasilKursBeli = nilaiRupiah/kursBeli;
	hasilKursJual = nilaiRupiah/kursJual;
	printf("\t\t Hasil Konversi Kurs Jual Ke Dollar : %.2f\n",hasilKursJual);
	printf("\t\t Hasil Konversi Kurs Beli ke Dollar : %.2f\n",hasilKursBeli);
	tanggalKurs();
}

/* Mengubah Dollar ke Rupiah
 * I.S. : Mata uang masih berjenis Dollar
 * F.S. : Mata uang sudah dikonversi menjadi Rupiah
 */
void convertDollartoRupiah(){
	float kursJual = 14804.66;
	float kursBeli = 14657.35;
	float nilaiDollar;
	float hasilKursBeli;
	float hasilKursJual;
	printf("\t\t Masukkan Nilai Dalam Dollar :");
	scanf("%f",&nilaiDollar);
	fflush(stdin);
	hasilKursBeli = nilaiDollar*kursBeli;
	hasilKursJual = nilaiDollar*kursJual;
	printf("\t\t Hasil Konversi Kurs Jual Ke Rupiah : %.2f\n",hasilKursJual);
	printf("\t\t Hasil Konversi Kurs Beli ke Rupiah : %.2f\n",hasilKursBeli);
	tanggalKurs();
}

/* Mengubah Rupiah ke Yen
 * I.S. : Mata uang masih berjenis Rupiah
 * F.S. : Mata uang sudah dikonversi menjadi Yen
 */
void convertRupiahtoYen(){
	float kursJual = 115.8;
	float kursBeli = 114.6;
	float nilaiRupiah;
	float hasilKursBeli;
	float hasilKursJual;
	printf("\t\t Masukkan Nilai Dalam Rupiah :");
	scanf("%f",&nilaiRupiah);
	fflush(stdin);
	hasilKursBeli = nilaiRupiah/kursBeli;
	hasilKursJual = nilaiRupiah/kursJual;
	printf("\t\t Hasil Konversi Kurs Jual Ke Yen : %.2f\n",hasilKursJual);
	printf("\t\t Hasil Konversi Kurs Beli ke Yen : %.2f\n",hasilKursBeli);
	tanggalKurs();
}

/* Mengubah Yen ke Rupiah
 * I.S. : Mata uang masih berjenis Yen
 * F.S. : Mata uang sudah dikonversi menjadi Rupiah
 */
void convertYentoRupiah(){
	float kursJual = 115.8;
	float kursBeli = 114.6;
	float nilaiYen;
	float hasilKursBeli;
	float hasilKursJual;
	printf("\t\t Masukkan Nilai Dalam Yen :");
	scanf("%f",&nilaiYen);
	fflush(stdin);
	hasilKursBeli = nilaiYen*kursBeli;
	hasilKursJual = nilaiYen*kursJual;
	printf("\t\t Hasil Konversi Kurs Jual Ke Rupiah : %.2f\n",hasilKursJual);
	printf("\t\t Hasil Konversi Kurs Beli ke Rupiah : %.2f\n",hasilKursBeli);
	tanggalKurs();
}

/* Mengubah Rupiah ke Euro
 * I.S. : Mata uang masih berjenis Rupiah
 * F.S. : Mata uang sudah dikonversi menjadi Euro
 */
void convertRupiahtoEuro(){
	float kursJual = 15538.97;
	float kursBeli = 15381.42;
	float nilaiRupiah;
	float hasilKursBeli;
	float hasilKursJual;
	printf("\t\t Masukkan Nilai Dalam Rupiah :");
	scanf("%f",&nilaiRupiah);
	fflush(stdin);
	hasilKursBeli = nilaiRupiah/kursBeli;
	hasilKursJual = nilaiRupiah/kursJual;
	printf("\t\t Hasil Konversi Kurs Jual Ke Euro : %.2f\n",hasilKursJual);
	printf("\t\t Hasil Konversi Kurs Beli ke Euro : %.2f\n",hasilKursBeli);
	tanggalKurs();
}

/* Mengubah Euro ke Rupiah
 * I.S. : Mata uang masih berjenis Euro
 * F.S. : Mata uang sudah dikonversi menjadi Rupiah
 */
void convertEurotoRupiah(){
	float kursJual = 15538.97;
	float kursBeli = 15381.42;
	float nilaiEuro;
	float hasilKursBeli;
	float hasilKursJual;
	printf("\t\t Masukkan Nilai Dalam Euro :");
	scanf("%f",&nilaiEuro);
	fflush(stdin);
	hasilKursBeli = nilaiEuro*kursBeli;
	hasilKursJual = nilaiEuro*kursJual;
	printf("\t\t Hasil Konversi Kurs Jual Ke Rupiah : %.2f\n",hasilKursJual);
	printf("\t\t Hasil Konversi Kurs Beli ke Rupiah : %.2f\n",hasilKursBeli);
	tanggalKurs();
}

//int mainKonversi(){
//int pilih;
//char back;
//menu :
//	
//printf("\t\t ____________________________________________\n                \xb3                                            \xb3\n");
//printf("\t\t\xb3\t Program Konversi Mata Uang          \xb3\n");
//printf("\t\t\xb3____________________________________________\xb3\n");
//printf("\t\t\xb3 1.Rupiah ke Dollar                         \xb3\n");
//printf("\t\t\xb3 2.Dollar ke Rupiah                         \xb3\n");
//printf("\t\t\xb3 3.Rupiah ke Yen                            \xb3\n");
//printf("\t\t\xb3 4.Yen ke Rupiah                            \xb3\n");
//printf("\t\t\xb3 5.Rupiah ke Euro                           \xb3\n");
//printf("\t\t\xb3 6.Euro ke Rupiah                           \xb3\n");
//printf("\t\t\xb3                                            \xb3\n");
//printf("\t\t\xb3____________________________________________\xb3\n");
//printf("\t\t Masukkan Pilihan :");
//scanf("%d",&pilih);
//
///* Memilih tipe mata uang yang akan dikonversi
// * I.S. : Belum memilih mata uang yang ingin dikonversi
// * F.S. : Sudah menentukan jenis mata uang yang ingin dikonversi
// */
//switch(pilih){
//	case 1 :
//		convertRupiahtoDollar();
//		break;
//	case 2 :
//		convertDollartoRupiah();
//		break;
//	case 3 :
//		convertRupiahtoYen();
//		break;
//	case 4 :
//		convertYentoRupiah();
//		break;
//	case 5 :
//		convertRupiahtoEuro();
//		break;
//	case 6 :
//		convertEurotoRupiah();
//		break;
//	default :
//		goto menu;
//}
//printf("\t\t Apakah ingin mengkonversi mata uang lain?(Masukkan Y/N untuk melanjutkan)");
//scanf("%c",&back);
//
//if(back == 'y'|| back == 'Y'){
//	system("cls");
//	goto menu;
//} else{
//	exit(0);
//}
//}


