//recursion
#include<stdio.h>
int rec()
{
	int i;
	printf("\n Enter the value of i");
	scanf("%d",&i);
	
	if(i<10)
	{
		rec();
	}
	else
	{
		printf("\n i is bigger than 10");
	}
}
int main()
{
	rec();
}