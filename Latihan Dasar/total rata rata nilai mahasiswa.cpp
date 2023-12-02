#include <iostream>
using namespace std;

int main() {
    int banyak_mahasiswa;
    float total_nilai = 0.0;

    //memasukkan banyaknya data mahasiswa
    cout << "Banyaknya data mahasiswa? ";
	cin >> banyak_mahasiswa;

    // Memasukkan nilai untuk setiap mahasiswa
    int i = 1;            
    while (i <= banyak_mahasiswa) {	
        float nilai;
        cout << "Data ke " << i << "? ";
		cin >> nilai;
        
        if(nilai < 0) {
        	continue;
		}
		
    	total_nilai += nilai;
    	i++;        
	}
    float rata_rata = total_nilai / banyak_mahasiswa;
	
    // Menampilkan hasil
	cout << "\nBanyaknya mahasiswa = " << banyak_mahasiswa << endl;
    cout << "Total nilai mahasiswa = " << total_nilai << endl;
    cout << "Rata-rata nilai mahasiswa = " << rata_rata << endl;

    return 0;
}
