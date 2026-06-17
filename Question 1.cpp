#include <iostream>
using namespace std;

int main() {
	int x;
	int y;
	
	cout << "Enter first value: "; cin >> x;
	cout << "Enter second value: "; cin>> y;
	
	cout << "Sum = " << x+y << endl;
	cout << "Difference = " << x-y << endl;
	cout << "Product = " << x*y << endl;
	
	if(y!=0)
	cout << "Quotient ="<<x/y<< endl;
	else
	cout <<"Division by zero is allowed"<< endl;
	
	return 0;
}
