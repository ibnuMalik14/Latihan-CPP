#include <iostream>
using namespace std;

int main() {
	
	int bulan;
	printf("Menentukan nama bulan\n");
	printf("1 = Januari 2 = Februari 3 = Maret 4 = April\n");
	printf("5 = Mei 6 = Juni 7 = Juli 8 = Agustus\n");
	printf("9 = September 10 = Oktober 11 = November 12 = Desember\n");
	printf("\nMasukan kode bulan(1 - 12) : "); scanf("%d", &bulan);
	
	if (bulan == 1) {
		printf("Bulan Januari");
	} 
	else if (bulan == 2) {
		printf("Bulan Februari");
	}
	else if (bulan == 3) {
		printf("Bulan Maret");
	}
	else if (bulan == 4) {
		printf("Bulan April");
	}
	else if (bulan == 5) {
		printf("Bulan Mei");
	}
	else if (bulan == 6) {
		printf("Bulan Juni");
	}
	else if (bulan == 7) {
		printf("Bulan Juli");
	}
	else if (bulan == 8) {
		printf("Bulan Agustus");
	}
	else if (bulan == 9) {
		printf("Bulan September");
	}
	else if (bulan == 10) {
		printf("Bulan Oktober");
	}
	else if (bulan == 11) {
		printf("Bulan November");
	}
	else if (bulan == 12) {
		printf("Bulan Desember");
	}
	else {
		printf("Kode bulan yang anda masukkan salah");
	}
}