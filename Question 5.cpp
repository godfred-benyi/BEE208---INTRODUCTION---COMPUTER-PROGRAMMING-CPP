#include<iostream>
using namespace std;

int main (){
	int choice;
	double V,I,P,R,T,E;
	
	cout <<"Calculation Menu\n";
	cout <<"1. Calculate DC Power\n";
	cout <<"2. Calculate Resistance using Ohm's Law\n";
	cout <<"3. Calculate Energy Consumption\n";
	cout <<" Enter choice:";
	cin >> choice;
	
	switch (choice){
		case 1:
			cout <<"Enter Voltage (V):";
			cin >> V;
			cout <<"Enter Current (A):";
			cin >>I;
			P=V*I;
			cout <<"{Power="<<P<<"W";
			break;
			
			case 2:
				cout <<"Enter Voltage (V):";
				cin >> V;
				cout <<"Enter Current (A):";
				cin >> I;
				R=V/I;
				cout <<"Resistance="<<R<<"Ohms";
				break;
				
				case 3:
					cout <<"Enter Power (W):";
					cin >> P;
					cout <<"Enter Time (h):";
					cin >> T;
					E=P*T;
					cout <<"Energy="<<E<<"Wh";
					break;
					
					default:
						cout <<"Invalid selection.";
	}
	
	return 0;
}
