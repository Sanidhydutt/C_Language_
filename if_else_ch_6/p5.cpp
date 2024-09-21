#include<stdio.h>
int main()
{
	int age;
	char g;
	
	printf(" enter your gender");
	scanf("%c", &g);
	
	if(g == 'm')
	{
		printf("\n male");
		printf("\n enter your age");
		scanf("%d", &age);
		
		if(age>=18)
		{
			printf("\n eligebal for vote");
		}
		else
		{
			printf("\n not eligebal for vote");
		}
      }
	else	
	{
			
		
	   	
    	 	
    	if(g == 'f')
    	printf("\n female");
    	printf("\n enter your age");
    	scanf(" %d", &age);
    	
    	if(age>=18)
    	{
    		printf("\n eligabal for vote");
 		}
 		else
 		{
 			printf("\n not eligebal for vote");
		 }
 	
		 
	
	}
}