#include <iostream>

using namespace std;

int main() {
    // Input tahun dari pengguna
    int tahun;
    cout << "Masukkan tahun: ";
    cin >> tahun;

    // Mengecek apakah tahun kabisat atau bukan
    if (tahun % 400 == 0) {
        cout << tahun << " adalah tahun kabisat." << endl;
    } else if (tahun % 100 == 0) {
        cout << tahun << " bukan tahun kabisat." << endl;
    } else if (tahun % 4 == 0) {
        cout << tahun << " adalah tahun kabisat." << endl;
    } else {
        cout << tahun << " bukan tahun kabisat." << endl;
    }

    return 0;
}
