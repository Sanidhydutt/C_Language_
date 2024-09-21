#include<iostream>
#include<string>
using namespace std;
struct ss
{
	int id;
	string name;
};
int main()
{
	struct ss s1;
	s1.id=11;
	s1.name = "sanidhy";
	//cout<<"\nid";
	//cin>>s1.id;
	//cout<<"\nname";
	//cin>>s1.name;
	cout<<"\nid:"<<s1.id<<"\tname:"<<s1.name;
//	cout<<"\nid2";
//	cin>>s2.id;
//	cout<<"\nname2";
//	cin>>s2.name;
//	cout<<"\nid2:"<<s2.id<<"\tname2:"<<s2.name;
}
