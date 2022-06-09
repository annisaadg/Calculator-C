/** Nama File : Trigonometri.c
 *  Deskripsi : File Body Kalkulator
 *  Oleh      : -Zacky Faishal Abror
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include "Trigonometri.h"

void akarDua(){
	int x;
	float hasil;
	printf("Masukan angka yang akan dipangkatkan: ");
	scanf("%d", &x);
	hasil = sqrt(x);
	printf("\nHasil: %.2f\n", hasil);
}

void angkaPangkatAngka(){
	int x,y;
	float hasil;
	printf("Masukan angka pertama: ");
	scanf("%d", &x);
	printf("\nMasukan angka pangkat: ");
	scanf("%d", &y);
	hasil = pow(x, y);
	printf("\nHasil Nilai: %.2f\n", hasil);
}

void Faktorial(){
	int angka,i;
	float hasil;
	printf("Masukan nilai: ");
	scanf("%d", &angka);
	if(angka==0){
		printf("Hasil Faktorial : 1 ");
	}else{
		hasil = 1;
		for(i = 1; i <= angka; i++) {
		hasil = hasil * i;
	}
		printf("\nHasil Faktorial: %.2f\n",hasil);
	}
	system ("pause");
}

void Logaritma(){
	int hasil,x;
	printf("Masukan Nilai: ");
	scanf("%f", &x);
	hasil = log10(x);
	printf("\nHasil Logaritma: %.2f\n", hasil);
	system ("pause");
}

void modulus(){
	int hasil,a,b;
	printf("Masukan Nilai: ");
	scanf("%d", &a);
	printf("\nMasukan nilai modulus: ");
	scanf("%d", &b);
	hasil = a % b;
	printf("\nHasil Modulus: %d\n", hasil);
	system ("pause");
}

void TrigonoSin(){
	int x;
	float hasil;
	printf("Masukan Sin yang akan dicari: ");
	scanf("%f", &x);
	hasil = sin(x * 3.14159 / 180);
	printf("\nHasil Sin: %.2f\n", hasil);
	system ("pause");
}

void TrigonoCos(){
	int hasil,x;
	printf("Masukan Cos yang akan dicari: ");
	scanf("%f", &x);
	hasil = cos(x * 3.14159 / 180);
	printf("\nHasil Cos: %.2f\n", hasil);
	system ("pause");
}

void TrigonoTan(){
	int hasil,x;
	printf("Masukan Tan yang akan dicari: ");
	scanf("%f", &x);
	hasil = tan(x * 3.14159 / 180);
	printf("\nHasil Tan: %.2f\n", hasil);
	system ("pause");
}

void TrigonoCosec(){
	int hasil,x;
	printf("Masukan Cosec yang akan dicari:");
	scanf("%f", &x);
	hasil = 1 / (sin(x * 3.14159 / 180));
	printf("\nHasil Cosec: %.2f\n", hasil);
	system ("pause");
}

void TrigonoCot(){
	int hasil,x;
	printf("Masukan Cot yang akan dicari: ");
	scanf("%f", &x);
	hasil = 1 / tan(x * 3.14159 / 180);
	printf("\nHasil Cot: %.2f\n", hasil);
	system ("pause");
}

void TrigonoSec(){
	int hasil,x;
	printf("Masukan Sec yang akan dicari: ");
	scanf("%f", &x);
	hasil = 1 / cos(x * 3.14159 / 180);
	printf("\nHasil Sec: %.2f\n", hasil);
	system ("pause");
}
