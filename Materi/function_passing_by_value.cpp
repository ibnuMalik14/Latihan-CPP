#include <iostream>
using namespace std;

/*
Saat kita meneruskan argumen ke suatu fungsi, 
salinan argumen tersebut dibuat dan diteruskan ke fungsi jika tipe parameter fungsi bukan reference.
Artinya nilai argumen awal tidak berubah. Salinan internal argumen dibuat, 
dan fungsi berfungsi dengan salinan tersebut. Contoh:
*/

void myfunction( int byvalue) 
{
	cout << "An argument passed by value: " << byvalue;
}

int main()
{
	myfunction(123); // passing by value / copy
}