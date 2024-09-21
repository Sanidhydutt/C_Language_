#include<stdio.h>
int main()
{
	int a,b;
	
	printf("\n enter the value of a,b");
	scanf("%d %d",&a,&b);
	
	if(a>b)
	{
	printf("\n a greater than b");
	}
	else if(b>a)
	{
	printf("\n b greater than a");
	}
	else
	{
		printf("\n a is b");
	}
	
}