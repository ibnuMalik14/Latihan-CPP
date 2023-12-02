#include <iostream>
class MyClass {
	public: 
	int x;
	void printx() {
		std::cout<< "The value of x is: " << x;
	}
};

int main() {
	MyClass o;
	o.x = 123; // x dapat diakses oleh objek o
	o.printx(); // printx juga dapat diakses oleh objek o
	
}

/*
Objek o sekarang memiliki akses langsung ke semua kolom anggota karena semuanya ditandai publik. 
member field selalu memiliki akses satu sama lain terlepas dari access speciffier.
Itulah sebabnya member function printx() dapat mengakses member field x 
dan mencetak atau mengubah nilainya
*/