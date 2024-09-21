#include<iostream>
using namespace std;
int main()
{
try
{	
	int age=18;
	
	if(age>=18)
	{
		cout<<"you can acces this website";
	}
	else
	{
		throw(age);
	}
}
	catch(int a)
	{
		cout<<a<<" youre younger person cant acces the website";
	}
}
