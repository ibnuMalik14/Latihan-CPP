#include <iostream>
using namespace std;

int main() {
	int bilangan;
	cout << "\t== Program Bilangan ==\n\n";
	cout << "Masukkan bilangan : ";
	cin >> bilangan;
	
	if (bilangan % 2 == 0) {
		cout << bilangan << " adalah bilangan genap";
	} else {
		cout << bilangan << " adalah bilangan ganil";
	}

	return 0;
}