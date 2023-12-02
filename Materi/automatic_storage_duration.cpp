/*
AUTOMATIC STORAGE DURATION

durasi di mana memori untuk suatu objek secara otomatis dialokasikan pada awal blok 
dan dibatalkan alokasinya ketika blok kode berakhir. Ini juga disebut memori tumpukan; 
objek dialokasikan pada tumpukan. Dalam hal ini, 
masa hidup suatu benda ditentukan oleh ruang lingkupnya.
Semua objek lokal memiliki durasi penyimpanan ini.

*/

#include <iostream>
int main()
{
	int x = 123;
	int y = 456;
	std::cout << "The values with automatic storage durations are: " << x
	<< " and " << y;
}