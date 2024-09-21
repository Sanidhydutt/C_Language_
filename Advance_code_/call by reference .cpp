#include<iostream>
using namespace std;

int cube(int&);

int main()
{
    int a = 10;
    cube(a);
    cout<<"\n a = "<<a<< endl;


}
int cube(int &x)
{
    x=x*x*x;
    cout<<"\n x = " << x << endl;
}
