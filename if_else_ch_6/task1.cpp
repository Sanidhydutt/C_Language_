#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a,b,c");
	scanf("%d %d %d", &a,&b,&c);
	
	if(a>b && a>c)
	{
		printf("\n a greter than b,c");
	}
	else if(b>a && b>c)
	{
		printf("\n b greter than a,c");
	}
	else
	{  
		printf("\n c is a,b");
	}
}