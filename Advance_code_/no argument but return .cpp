#include<iostream>
using namespace std;

float simp_int();
int main()
{
    float si;

    si = simp_int();

     cout<<"\n Simple Interest  = " << si;

}
float simp_int()
{
    float p,r,t,si;
    cout<<"Enter Principal ,Rate and Time :";
    cin>>p>>r>>t;

    si = (p*r*t)/100;

 return si;
}
