#include "billings.h"

float hitungHarga(float harga, float disc){
	float hrg;
	hrg = harga - (harga*(disc/100));
	return hrg;
}

float hitungDiskon(int jmlh, float temp, float disc){
	float dis;
	dis = jmlh*(temp*(disc/100));
	return dis;
}

float hitungTax(float tsh){
	float tax;
	tax=tsh*(0.1);
	return tax;
}

float hitungTsh(float tsh){
	float total;
	total = tsh+(tsh*0.1);
	return total;
}

float hitungKembalian(float pmbyr, float tsh){
	float pay;
	pay = pmbyr-tsh; 
	return pay;
}
   
float hitungMinus(float kmbl){
	float hutang;
	hutang =-1*kmbl;
	return hutang;
}

