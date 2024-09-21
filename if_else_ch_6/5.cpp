#include<stdio.h>
int main ()
{
	//nested if else
	
	int age;
	char g;
	
	printf("Enter your Gender");
	scanf("%c",&g);
	
	if(g == 'm' || g == 'M')
	{
		printf("\n Male");
		printf("\n Enter your age");
		scanf("%d",&age);
		
		if(age>=18)
		{
			printf("\n Eligabel For vote");
		}
		else
		{
			printf("\n Not Eiligabel For Vote");
		}
		
	}
	else
	{
		
	if(g == 'f' || g == 'F')
	{
		printf("\n Female");
		printf("\n Enter your age");
		scanf("%d",&age);
		
		if(age>=18)
		{
			printf("\n Eligabel For vote");
		}
		else
		{
			printf("\n Not Eiligabel For Vote");
		}
		
	}
}
}