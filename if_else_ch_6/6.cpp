#include<stdio.h>

int main()
{
	int c;
	
	printf("Enter the day number");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:
			printf("\n Sunday");
		break;
		
		case 2:
			printf("\n monday");
		break;
		
		case 3:
			printf("Tuesday");
			break;
			
		case 4:
			printf("wednesday");
			break;
			
		case 5:
			printf("thusday");
			break;
			
		case 6:
			printf("friday");
			break;
			
		case 7: 
			printf("saturday");
			break;
		
		default:
			printf("\ninvalid day");
		break; 
	}
}
