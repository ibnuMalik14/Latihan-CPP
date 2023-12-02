#include <iostream>
using namespace std;
/*
Jika tipe parameter fungsi adalah tipe referensi, 
maka argumen sebenarnya diteruskan ke fungsi, bukan salinan argumen tersebut. 
Fungsi tersebut sekarang dapat mengubah nilai argumen. Contoh:
*/

void myfunction(int & byreference)
{
	byreference++; // kita bisa ubah nilai dari argumennya
	cout << "An argument passed by reference: " << byreference;
}

int main()
{
	int x = 123;
	myfunction(x);
}