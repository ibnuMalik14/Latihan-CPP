#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    unsigned int nim; // Menggunakan long long int untuk NIM
    string fakultas;
    string program_studi;

    // Meminta pengguna untuk memasukkan nama
    cout << "Masukkan Nama: ";
    getline(cin, nama);

    // Meminta pengguna untuk memasukkan NIM (sebagai long long int)
    cout << "Masukkan NIM : ";
    cin >> nim;

    cin.ignore(); // Membersihkan buffer keyboard

    // Meminta pengguna untuk memasukkan fakultas
    cout << "Masukkan Fakultas: ";
    getline(cin, fakultas);

    // Meminta pengguna untuk memasukkan program studi
    cout << "Masukkan Program Studi: ";
    getline(cin, program_studi);

    // Menampilkan informasi yang telah diinput oleh pengguna
    cout << "\nData Mahasiswa:\n";
    cout << "Nama: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "Fakultas: " << fakultas << endl;
    cout << "Program Studi: " << program_studi << endl;

    return 0;
}
