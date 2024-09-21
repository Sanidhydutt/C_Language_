#include<iostream>
using namespace std;
int simp_int();

 int main()
{

  simp_int();
 }

 int simp_int()
 {
     float p,r,t,si;
     cout<<" Enter Principal, Rate and Time :  ";
     cin>>p >>r >> t ;

     si = (p*r*t)/100;

     cout <<"\n Simple Interest = " <<si;

return 0;
 }

