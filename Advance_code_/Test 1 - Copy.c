#include<stdio.h>

int main()
{
  int b,h;
  float area;

  printf("Enter the values of breadth and height :\n");
  scanf("%d%d",&b,&h);

  area =(b*h)/2;

  printf("Area of triangle =%2f \n",area);

  return 0;
}

