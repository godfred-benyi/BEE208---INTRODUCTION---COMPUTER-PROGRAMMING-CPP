#include<iostream>
using namespace std;

int main (){
	float x,y;
	cin >>x>>y;
	
	float larger = (x>y) ? x:y;
	
	cout << "Larger" << larger;
	
	return 0;
}
