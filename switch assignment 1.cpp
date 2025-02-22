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
	switch( (int) bmi)
	{
	case 0 ... 19:
		cout<<"lower than normal weight"<<endl; 
		break;
	case 20 ... 25:
		cout<<"normal weight"<<endl; 
		break;
	case 26 ... 30:
		cout<<"overweight weight"<<endl; 
		break;
	case 31 ... 40:
		cout<<"obese"<<endl; 
		break;
	default:
		cout<<"extreme obesed";
		break;
	}
	return 0;
}