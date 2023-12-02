/*
Kita dapat secara dinamis mengalokasikan dan membatalkan alokasi penyimpanan 
untuk objek kita dan mengarahkan pointer ke memori yang baru dialokasikan ini.

Operator new mengalokasikan ruang untuk suatu objek. 
Objek dialokasikan pada penyimpanan kosong, sering disebut memori heap 

Memori yang dialokasikan harus dibatalkan alokasinya menggunakan operator delete. 
Ini membatalkan alokasi memori yang sebelumnya dialokasikan dengan operator new.
*/

int main()
{
	int* p = new int;
	*p = 123;
	std::cout << "The pointed-to value is: " << *p;
	delete p;
}