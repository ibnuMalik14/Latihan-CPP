/*
Kita dapat memiliki beberapa fungsi dengan nama yang sama tetapi dengan tipe parameter berbeda.
Ini disebut function overloading. Penjelasan sederhananya: 
Jika nama fungsinya sama, tetapi tipe parameternya berbeda, 
maka kita mengalami kelebihan beban fungsi. Berikut ini contoh deklarasi kelebihan fungsi:
void myprint(char param);
void myprint(int param);
void myprint(double param);
*/

#include <iostream>
using namespace std;

void myprint(char param);
void myprint(int param);
void myprint(double param);

int main()
{
	myprint('c'); // memanggil char
	myprint(123); // memanggil integer
	myprint(456.789); // memanggil double
}

void myprint(char param)
{
	cout << "Printing a character: " << param << '\n';
}

void myprint(int param)
{
	cout << "Printing an Integer: " << param << '\n';
}

void myprint(double param)
{
	cout << "Printing a double: " << param << '\n';
}




















