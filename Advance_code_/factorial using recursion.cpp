#include<iostream>
long fact(int);

int main()
{
    int n;

    cout<< " Enter any number : ";
    cin>>n;

    long f = fact(n);
    cout<<" Factorial = "<<f;

}

long fact(int a)
{
    if(a ==1)
            return 1;
    else
           return (a* fact(a-1));

}
