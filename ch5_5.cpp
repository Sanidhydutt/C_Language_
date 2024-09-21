#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter the value of a,b");
	scanf("%d %d",&a,&b);
	
	printf("\na & b = %d",a&b);
	printf("\na | b = %d",a|b);
	printf("\na ^ b = %d",a^b);	
}