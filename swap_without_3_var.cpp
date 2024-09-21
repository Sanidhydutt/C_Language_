#include<stdio.h>
int main()
{
	int a,b;
	
	a=10;
	b=20;
	
	printf(" before swaping");
	
	printf("\na = %d ",a);
	printf("\nb = %d ",b);
	
	printf("\n After swaping");

	a=a+b;
	b=a-b;
	a=a-b;
	

	printf("\na = %d ",a);
	printf("\nb = %d ",b);
	
	
}