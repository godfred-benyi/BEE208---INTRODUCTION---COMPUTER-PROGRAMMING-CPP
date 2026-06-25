#include<iostream>
using namespace std;

int main(){
	float voltage;
	
	cout <<" Enter initial battery voltage:";
	cin >> voltage;
	
	while (voltage >=12.0){
		cout << "Voltage is"<< voltage <<"V. Battery OK." << endl;
		cout << "Enter next voltage reading :";
		cin >> voltage;
	} 
	cout <<"\nBattery voltage low. Recharge required."<< endl;
	
	return 0;
}
