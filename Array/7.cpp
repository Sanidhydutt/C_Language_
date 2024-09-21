#include<stdio.h>
int main()
{
	char a[5][10];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n Enter Your Name");
		scanf("%s",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n Name = %s",a[i]);
	}
	
}