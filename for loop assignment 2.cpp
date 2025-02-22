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
	int i= salesVolume;
	for(i=0 ;i<=0;i++)
		
			if(salesVolume<2000){
		cout<<"commision=3%"<<endl;
	}
	else if((salesVolume>=2000)&&(salesVolume<=2999))
	{
		cout<<"commission=6%"<<endl;
	}
	else if((salesVolume>=3000)&&(salesVolume<=3999))
	{
		cout<<"commission=9%"<<endl;

	}
	else if((salesVolume>=4000)&&(salesVolume<=4999))
	{
		cout<<"commission=12%";

	}
	else 
	{
		cout<<"commission=15%";

	}
	
	return 0;
}