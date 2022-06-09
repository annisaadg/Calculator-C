/** Nama File : convertlength.h
 *  Deskripsi : Header File Convert Length
 *  Oleh      : Annisa Dinda Gantini
 */

#ifndef CONVERTLENGTH_H
#define CONVERTLENGTH_H
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

float input,converter,result;
int position,diff;
int length;
int tolength;
char charfrom[15];
char charto[15];

/* Mengubah input bertipe integer ke dalam karakter length
 * I.S. : nilai masih bertipe integer
 * F.S. : nilai sudah bertipe character
 */
void convertToChar();

/* Menghitung hasil konversi
 * I.S. : hasil konversi belum terinisialisasi
 * F.S. : hasil konversi sudah terinisialisasi
 */
float calculateLength(float input, int converter);

/* Menghitung selisih perbandingan nilai length
 * I.S. : selisih antar length yang akan dihitung belum diketahui
 * F.S. : selisih antar length yang akan dihitung sudah diketahui
 */
int difference(int length, int tolength);

/* Menentukan apakah operasi yang akan dipakai adalah perkalian atau pembagian
 * I.S. : penentuan operasi yang akan dipakai belum diketahui
 * F.S. : penentuan operasi yang akan dipakai sudah diketahui
 */
int timesordiv(int position);

#endif
