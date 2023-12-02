#include <iostream>
using namespace std;

int main() {
    float panjang, lebar, tinggi;

    // Masukkan Panjang, Lebar, Tinggi
    cout << "Masukkan panjang balok: ";
    cin >> panjang;

    cout << "Masukkan lebar balok: ";
    cin >> lebar;

    cout << "Masukkan tinggi balok: ";
    cin >> tinggi;

    // rumus luas dan volume balok
    float luas = 2 * (panjang*lebar + panjang*tinggi + lebar*tinggi);
    float volume = panjang * lebar * tinggi;
	
	// Menampilkan hasil
    cout << "Luas permukaan balok: " << luas << endl;
    cout << "Volume balok: " << volume << endl;
    
    return 0;
}
