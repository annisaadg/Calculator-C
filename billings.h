#ifndef BILLINGS_H
#define BILLINGS_H
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

float hitungHarga(float harga, float disc);
float hitungDiskon(int jmlh, float temp, float disc);
float hitungTax(float tsh);
float hitungTsh(float tsh);
float hitungKembalian(float pmbyr, float tsh);
float hitungMinus(float kmbl);

#endif
