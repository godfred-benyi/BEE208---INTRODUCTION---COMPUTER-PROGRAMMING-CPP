#include <iostream>
using namespace std;

int main (){
	double voltage;
	
	cout << "Enter voltage reading (V):";
	cin >> voltage;
	
	if (voltage<0){
		cout <<"Invalid voltage reading";
	}
	else if (voltage <=50){
		cout <<"low voltage";
	}
	else if (voltage <=240){
		cout <<"Normal voltage";
	}
	else if (voltage <=415){
		cout <<"High vboltage";
	}
	else {
		cout <<"Dangerous voltage";
	}
	
	return 0;
}
