#include<iostream>
using namespace std;

class A {

   public :

   void abc()
   {
     cout<<"Hello  ";
   }
  void abc(int a)

  {
      cout<<"Hii";
  }
};

int main()
{
    A a1;
    a1.abc();
    a1.abc(45);

    return 0;
}

