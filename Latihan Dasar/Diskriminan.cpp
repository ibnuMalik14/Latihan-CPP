#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a,b,c;
	
	cout << "Enter coefficient a: ";
	cin >> a;
	
	cout << "Enter coefficient b: ";
	cin >> b;
	
	cout << "Enter coefficient c: ";
	cin >> c;
	
	double delta = pow(b,2)-4*a*c;
	
	cout << "The Delta of the equation is: "<< delta <<endl;
	
	return 0;
}