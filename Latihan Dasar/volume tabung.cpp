#include <iostream>
using namespace std;
int main() {
	/*Menentukkan konstanta pi*/
	float pi;
	pi = 3.14;
	
	/*Masukkan nilai jari-jari*/
	int r;
	cout << "masukkan jari-jari" << endl; 
	cin >> r;
	
	/*Masukkan nilai tinggi*/
	int tinggi;
	cout << "masukkan tinggi" << endl; 
	cin >> tinggi;
	
	/*Perhitungan hasil*/
	int hasil;
	cout << "Volume tabungnya adalah " << endl;
	cout <<  pi*r*r*tinggi<<endl;
	

	return 0;
}