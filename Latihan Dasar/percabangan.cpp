#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
int x, y;
printf("Masukkan 2 buah nilai\n");
scanf("%d %d", &x, &y);
if (x > 0)
if (y > 0)
	printf("Nilai x dan y adalah positif\n");
else
	printf("Nilai x positif dan y negatif\n");
else
printf("Nilai x negatif\n");

_getch();
return 0;
}
