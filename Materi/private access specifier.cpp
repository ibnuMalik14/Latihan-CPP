#include <iostream>;
class MyClass
{
	private:
	int x; // sekarang x memuliki privat access
	public:
	void printx()
	{
		std::cout << "The value of x is:" << x; // x dapat mengakses printx
	}
}
int main()
{
	MyClass o; // membuat sebuah objek o
	o.x = 123; // Error, x memiliki private access, dan o tidak bisa mengaksesnya
	o.printx(); // printx() dapat diakses oleh objek o
}