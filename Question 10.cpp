#include <iostream>
using namespace std;

int main (){
	int x,y;
	cin >>x >> y;
	
	int Larger = (x>y) ? x:y;
	
	cout << "Larger =" << Larger;
	
	return 0;	
}
