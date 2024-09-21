#include<iostream>
using namespace std;

class A {

   public :

   void abc()
   {
     cout<<"Hello  ";
   }
  };

class B {

   public :

   void abc()
   {
    cout<<"Hii  ";
   }
};

int main()
{
    A a1;
    a1.abc();
    B b1;
    b1.abc();

    return 0;
}

