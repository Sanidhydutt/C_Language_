#include<iostream>
using namespace std;

int main()
{
    int sum;
    int arr[5];


    cout<<"Enter any five Integer numbers :::";
    for( int i=0 ; i<5 ; i++)
     {
         cin>>arr[i];
     }

     sum =0;
     for( int i=0 ; i<5 ; i++)

     {
         sum =sum + arr[i];
     }
     cout<<" The sum of the Array element is  :::"<< sum;

     return 0;
}
