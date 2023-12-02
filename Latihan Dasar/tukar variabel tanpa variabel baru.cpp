#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    // Masukkan Nilai
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    
    // Menukar nilai tanpa menggunakan variabel penukar
    a = a + b;
    b = a - b;
    a = a - b;
    
    // Menampilkan hasil pertukaran
    cout << "Nilai a setelah ditukar b: " << a << endl;
    cout << "Nilai b setelah ditukar a: " << b << endl;
    
    return 0;
}
