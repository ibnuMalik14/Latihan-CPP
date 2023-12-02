#include <iostream>
using namespace std;

int multiplereturns(int x);

int main()
{
	cout << "The value of a function is: " << multiplereturns(77);
}
int multiplereturns(int x)
{
	if (x >= 42)
	{	
		return x;
	}
	return 0;
}