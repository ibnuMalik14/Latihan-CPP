#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double V0, Vt, ta, tb;
	
	cout << "Masukkan kecepatan awal: ";
	cin >> V0;
	
	cout << "Masukkan kecepatan akhir: ";
	cin >> Vt;
	
	cout << "masukkan waktu awal: ";
	cin >> ta;
	
	cout << "Masukkan waktu tempuh akhir: ";
	cin >> tb;
	
	double kecepatan_rata = (Vt-V0) / (tb-ta);
	cout << "Kecepatan rata-ratanya adalah: " << kecepatan_rata << " m/s" << endl;

	return 0;
}