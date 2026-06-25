#include<iostream>
using namespace std;

int main (){
	double ratedcurrent, measuredcurrent;
	
	cout <<"Enter rated current (A):";
	cin >> ratedcurrent;
	
	cout <<"Enter measured current (A):";
	cin >> measuredcurrent;
	
	if (measuredcurrent>ratedcurrent){
		cout <<"Overload deleated, Circuit breaker should trip.";
	}
	else {
		cout << "Current is within safe limit.";
	}
	
	return 0;
}
