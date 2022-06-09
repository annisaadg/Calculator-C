/** Nama File : convertlength.h
 *  Deskripsi : Body File Convert Length
 *  Oleh      : Annisa Dinda Gantini
 */

#include "convertlength.h"

/* Mengubah input bertipe integer ke dalam karakter length
 * I.S. : nilai masih bertipe integer
 * F.S. : nilai sudah bertipe character
 */
void convertToChar(){
	switch(length){
		case 1:
			strcpy(charfrom,"Milimeter");
			break;
		case 2:
			strcpy(charfrom,"Centimeter");
			break;
		case 3:
			strcpy(charfrom,"Desimeter");
			break;
		case 4:
			strcpy(charfrom,"Meter");
			break;
		case 5:
			strcpy(charfrom,"Dekameter");
			break;
		case 6:
			strcpy(charfrom,"Hektometer");
			break;
		case 7:
			strcpy(charfrom,"Kilometer");
			break;
	}
	switch(tolength){
		case 1:
			strcpy(charto,"Milimeter");
			break;
		case 2:
			strcpy(charto,"Centimeter");
			break;
		case 3:
			strcpy(charto,"Desimeter");
			break;
		case 4:
			strcpy(charto,"Meter");
			break;
		case 5:
			strcpy(charto,"Dekameter");
			break;
		case 6:
			strcpy(charto,"Hektometer");
			break;
		case 7:
			strcpy(charto,"Kilometer");
			break;
	}
}

/* Menghitung hasil konversi
 * I.S. : hasil konversi belum terinisialisasi
 * F.S. : hasil konversi sudah terinisialisasi
 */
float calculateLength(float input, int converter){
	float result;
	if(diff<0){
		result = input/converter;
	}else{
		result = input*converter;
	}
	return result;
}

/* Menghitung selisih perbandingan nilai length
 * I.S. : selisih antar length yang akan dihitung belum diketahui
 * F.S. : selisih antar length yang akan dihitung sudah diketahui
 */
int difference(int length, int tolength){
	int different;
	different = length-tolength;
	return different;
}

/* Menentukan apakah operasi yang akan dipakai adalah perkalian atau pembagian
 * I.S. : penentuan operasi yang akan dipakai belum diketahui
 * F.S. : penentuan operasi yang akan dipakai sudah diketahui
 */
int timesordiv(int position){
	int converter;
	switch(position){
		case 0:
			converter=1;
			break;
		case 1:
			converter=10;
			break;
		case 2:
			converter=100;
			break;
		case 3:
			converter=1000;
			break;
		case 4:
			converter=10000;
			break;
		case 5:
			converter=100000;
			break;
		case 6:
			converter=1000000;
			break;
	}
	return converter;
}
