#include <iostream>
#include <cmath>
using namespace std;


int main() {
    // Input nilai a, b, dan c
    double a, b, c;
    cout << "Masukkan nilai a: " ; cin >> a;
    cout << "Masukkan nilai b: " ; cin >> b;
    cout << "Masukkan nilai c: " ; cin >> c;

    // rumus diskriminan
    double D = b * b - 4 * a * c;
	double x1 = (-b + sqrt(D)) / (2 * a);
	double x2 = (-b - sqrt(D)) / (2 * a);
	
	
	cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl; 
    if (D > 0) {
 		cout << "Akar real dan berbeda " << endl;
 		cout << "x1 = " << x1 << endl;
 		cout << "x2 = " << x2 << endl;
    } else if (D == 0) {
        cout << "Akar real dan sama" << endl;
        cout << "x1 = " << x1 << endl;
 		cout << "x2 = " << x2 << endl;
    } else {
		cout << "Akar tidak real / imajiner " << endl;
    }

    return 0;
}
