#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int *p,*q;
	
	cout<<"Enter the value of a,b";
	cin>>a;
	cout<<"\n a="<<a;
	
	p = &a;
	//q = &b;
	
	*p = 20;
	
	cout<<"a="<<a;
}
