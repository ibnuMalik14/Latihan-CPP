#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a,b,c,h;
	
	cout << "Enter the length of side a: ";
	cin >> a;
	
	cout << "Enter the length of side b: ";
	cin >> b;
	
	cout << "Enter the length of side c: ";
	cin >> c;
	
	cout << "Enter the height relative to side b: ";
	cin >> h;
	
	double perimeter = a+b+c;
	double area = (b*h)/2;
	
	cout << "The parimeter of the triangel is: " << perimeter << endl;
	cout << "The area of triangle is: " << area << endl;
	
	return 0;	
}