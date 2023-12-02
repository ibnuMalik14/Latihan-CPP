#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string waktu;
    int jam, menit, detik;

    cout << setw(50) << setfill('-') << "-" << setfill(' ') << endl;
    cout << "Program Konversi Jam ke Detik" << endl;
    cout << setw(50) << setfill('-') << "-" << setfill(' ') << endl;
  
    cout << "Input jam (hh:mm:ss): " ;
    // Membaca input pengguna dan menyimpan ke variabel waktu waktu
    getline(cin, waktu);
	// Mengambil nilai string waktu dan mem-parsingnya menjadi integer    ke variabel jam, menit, detik
    sscanf(waktu.c_str(), "%d:%d:%d", &jam, &menit, &detik);
    
    cout << endl;
    
    // Menghitung total detik
    int total_detik = (jam * 3600) + (menit * 60) + detik;
    cout<<jam<<" Jam "<<menit<<" Menit "<<detik<<" Detik = "<< total_detik<<" Detik"<<endl;

    cout << setw(50) << setfill('-') << "-" << setfill(' ') << endl;
    return 0;
}
