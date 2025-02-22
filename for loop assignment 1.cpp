#include<iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	string name;
	string reg;
	int height;
	int weight;
	float bmi;
	cout<<"enter your name"<<endl;
	getline(cin,name);
	cout<<"enter your reg numbre"<<endl;
	getline(cin,reg);
	cout<<"enter your height"<<endl; 
	cin>>height;
		cout<<"enter your weight"<<endl;
	cin>>weight;
	bmi=weight/(float)(height*height);
	cout<<"the bmi is"<<bmi<<endl;
	int i=bmi;
	for (i= 0;i<=0 ;i++)
		if(bmi<20){
		cout<<"lower than normal weight"<<endl;
	}
	else if((bmi>20)&&(bmi<25))
	{
		cout<<"normal weight"<<endl;
	}
	else if((bmi>26)&&(bmi<30))
	{
		cout<<"overweight"<<endl;

	}
	else if((bmi>31)&&(bmi<40))
	{
		cout<<"obase";

	}
	else 
	{
		cout<<"extreme obese";

	}
	

	return 0;
}