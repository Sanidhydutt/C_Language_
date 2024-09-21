#include<stdio.h>
int main()
{
	int a;
	int *p;
	
	printf("\n Enter the value of a");
	scanf("%d",&a);
	printf("\n a = %u",&a); // showing addres
	printf("\n a = %d",a);
	p = &a;
	printf("\n p* = %u",*p);
	
}
