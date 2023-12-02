#include <iostream>
using namespace std;

int main() {
    float celcius, reamur, fahrenheit, kelvin;

    // Masukkan suhu dalam Celcius
    cout << "Masukkan suhu dalam Celcius: ";
    cin >> celcius;

    // Konversi suhu ke Reamur, Fahrenheit, dan Kelvin
    reamur = 4.0 / 5.0 * celcius;
    fahrenheit = 9.0 / 5.0 * celcius + 32;
    kelvin = celcius + 273.15;

    // Menampilkan hasil konversi
    cout << "Hasil konversi suhu:\n";
    cout << "Reamur: " << reamur << endl;
    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Kelvin: " << kelvin << endl;

    return 0;
}
