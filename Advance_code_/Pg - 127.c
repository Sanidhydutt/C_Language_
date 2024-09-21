#include<stdio.h>
int main()
{
  int a= 100;
  Loop:do {


  if(a== 105) {


    a = a+1;
    goto Loop;
  }

  printf("value of a: %d\n", a);
  a++;
  }  while ( a<110);
    return 0;
}
