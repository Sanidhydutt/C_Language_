#include<stdio.h>

int main()

{
	int i,a;
	
	printf("Enter the Table value");
	scanf("%d",&a);
	
	for(i=1;i<=10;i++)
	{
		printf("\n %d x %d = %d",a,i,i * a);
	}
	
}