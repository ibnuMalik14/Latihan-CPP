/*
Demikian pula, suatu kelas dapat menyimpan fungsi. Ini disebut member finction. 
Mereka digunakan untuk melakukan beberapa operasi pada bidang data. 
Untuk mendeklarasikan member function kita menulis

*/

/* 
CARA 1
fungsi dideklarasikan di dalam body class
*/
class Myclass
{
	void dosomething()
	{
		std::cout << "Hello World from a class.";
	}
}
/*
CARA 2
Yang kedua adalah mendefinisikannya di luar kelas. 
Dalam hal ini, kita menulis tipe fungsinya terlebih dahulu, diikuti dengan nama kelas,
diikuti dengan operator ::, diikuti dengan nama fungsi, daftar parameter,
jika ada, dan isi fungsi:
*/
class MyClass
{
	void dosomething(); // deklarasikan functionnya dalam  class
};
void MyClass::dosomething() // // definisika functionnya di luar class
{
	std::cout << "Hello World from a class";
}

/*
Di sini, kita mendeklarasikan member function di dalam class dan mendefinisikannya di luar class.
Kita dapat memiliki beberapa member function dalam satu class. 
Untuk mendefinisikannya di dalam kelas, kita akan menulis:
*/

class MyClass
{
	void dosomething() // deklarasi dan definisi dalam class
	{
		std::cout << "Hello World from a class";
	}
	void dosomethingelse() // deklarasi dan definisi dalam class
	{
		std::cout << "Hello Universe from class";
	}
};

// Untuk deklarasi dalam class dan definisi diluar class dengan dua member function atau lebih
class MyClass 
{
	void dosomething();
	void dosemethingelse();
};

void MyClass::	dosomething()
{
	std::cout << "Hello World from a class";
}

void MyClass::	dosomethingelse()
{
	std::cout << "Hello World from a class.";
}









































