#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    // Meminta pengguna memasukkan dua nilai
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    
    int c; // Variabel penukar
    
    // Menukar nilai menggunakan variabel penukar
    c = a;
    a = b;
    b = c;
    
    // Menampilkan hasil pertukaran
    cout << "Nilai a setelah ditukar b: " << a << endl;
    cout << "Nilai b setelah ditukar a: " << b << endl;
    
    return 0;
}
