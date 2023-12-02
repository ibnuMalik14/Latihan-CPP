#include <iostream>
#include <string>
using namespace std;
/*
Akan lebih efisien jika meneruskan argumen dengan referensi, 
namun untuk memastikan argumen tersebut tidak diubah, 
kita menggunakan referensi const
Contoh:
*/

void myfunction( const string& byconstreference)
{
	cout << "An argument passed by const reference: " << byconstreference;
}

int main()
{
	string s = "Hello World!";
	myfunction(s);
}

/*
Kami menggunakan referensi lewat const untuk alasan efisiensi, 
dan pengubah const memastikan nilai argumen tidak akan diubah. 
*/