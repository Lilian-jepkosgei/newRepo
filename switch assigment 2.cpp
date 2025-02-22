#include <iostream>
#include <string>
using namespace std;
int main()
{
	string agentName;
	int salesVolume;
	int commissionRate;
	float commissionAmount;
	cout<<"Enter agent name"<<endl;
	getline(cin,agentName);
	cout<<"Enter sales volume"<<endl;
	cin>>salesVolume;
	commissionAmount=salesVolume*commissionRate;
	cout<<"commission amount="<<commissionAmount<<endl;
	switch( (int)salesVolume) {
	case 0 ... 1999:
		cout<<"commission 3%"<<endl; 
		break;
	case 2000 ... 2999:
		cout<<"commission 6%"<<endl; 
		break;
	case 3000 ... 3999:
		cout<<"commission 9%"<<endl; 
		break;
	case 4000 ... 4999:
		cout<<"commission 12%"<<endl; 
		break;
	default:
		cout<<"commission 15%";
		break;
	
	
	}
	
	return 0;
}