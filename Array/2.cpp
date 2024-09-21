#include<stdio.h>
int main()
{
	// user-define
	int a[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter the value of a");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n a[%d] = %d",i,a[i]);
	}
	
	
}