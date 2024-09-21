#include<stdio.h>
int fire()
{
	printf("\n Fire");	
}
int main()
{
	char a;
	printf("Enter the button");
	scanf("%c",&a);
	
	if(a=='f' || a=='F')
	{
		fire();
	}
	else
	{
		printf("\n Dead");
	}
}