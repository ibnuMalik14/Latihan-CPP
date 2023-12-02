#include <iostream>
using namespace std;

int mysum(int x, int y);

int main() {
	int myresult = mysum(5,10);
	cout << "The sum of 5 and 10 is: " << myresult;
}

int mysum(int x, int y) {
	return x + y;
}