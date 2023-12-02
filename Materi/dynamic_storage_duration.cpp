/*
DYNAMIC STORAGE DURATION

durasi di mana memori untuk suatu objek dialokasikan secara manual dan dialokasikan secara manual. 
Jenis penyimpanan ini sering disebut sebagai memori heap.
Pengguna menentukan kapan memori untuk suatu objek akan dialokasikan dan kapan akan dilepaskan.
Masa hidup suatu objek tidak ditentukan oleh ruang lingkup di mana objek tersebut didefinisikan.
Kami melakukannya melalui operator penunjuk baru dan cerdas. 
Dalam C++ modern, kita sebaiknya memilih fasilitas smart pointer daripada operator baru.

*/

#include <iostream>
int main()
{
	int* p = new int{ 123 };
	std::cout << "The value with a dynamic storage duration is: " << *p;
	delete p;
}