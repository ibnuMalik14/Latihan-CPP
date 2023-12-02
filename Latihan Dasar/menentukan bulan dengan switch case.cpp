#include <iostream>
using namespace std;

int main() {	
	int bulan;
	printf("Menentukan nama bulan\n");
	printf("1 = Januari 2 = Februari 3 = Maret 4 = April\n");
	printf("5 = Mei 6 = Juni 7 = Juli 8 = Agustus\n");
	printf("9 = September 10 = Oktober 11 = November 12 = Desember\n");
	printf("\nMasukan kode bulan(1 - 12) : "); scanf("%d", &bulan);
	
	switch (bulan) {
		case 1: puts("Bulan Januari"); 
			break;
		case 2: puts("Bulan Februari"); 
		 	break;
		case 3: puts("Bulan Maret"); 
		  	break;
		case 4: puts("Bulan April");
			break;
		case 5: puts("Bulan Mei"); 
			break;
		case 6: puts("Bulan Juni"); 
			break;
		case 7: puts("Bulan Juli"); 
			break;
		case 8: puts("Bulan Agustus"); 
			break;
		case 9: puts("Bulan September"); 
			break;
		case 10: puts("Bulan Oktober"); 
			break;
		case 11: puts("Bulan November"); 
			break;
		case 12: puts("Bulan Desember"); 
			break;
		default: puts("Kode Bulan yang Anda masukan SALAH");
	}
	return 0;
}
