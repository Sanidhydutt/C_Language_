#include<stdio.h>
int main()
{
	int i=1,j;
	printf(" enter the value of table");
	scanf("%d",&j);
	
	while(i<=10)
	{
	printf("\n %d x %d = %d",j,i,i*j  );
		i++;
	}
}