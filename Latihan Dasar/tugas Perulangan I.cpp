#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
char cek;
int n, c;
float h = 0, g, max = -9999, min = 9999;
do
{
system("cls");
cout << "Masukkan banyaknya data nilai = "; 
cin >> n;
cout << endl;
for (c = 1; c <= n; c++)
{
cout << "Masukkan data ke-" 
   << c << " = "; cin >> g;
h = h + g;
if (g > max) max = g;
if (g < min) min = g;
}
float rata2 = h / n;
cout << endl;
cout << "Nilai maksimum adalah " << max << endl;
cout << "Nilai minimum adalah  " << min << endl;
cout << "Jumlah seluruhnya adalah " << h << endl;
cout << "Nilai rata-rata adalah " << rata2 << endl;
cout << endl;
cout << "Apakah ingin menghitung lagi (Y/T) ? ";  
cin >> cek;
} while ((cek == 'Y') || (cek == 'y'));
cout << endl << "Terima kasih";
_getch();
return 0;
}
