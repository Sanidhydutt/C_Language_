#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter the value of a,b");
	scanf("%d %d",&a,&b);
	
	printf("\n a==b ^ a==b = %d ",!(a==b ^ a==b));
	printf("\n a==b ^ a!=b = %d ",!(a==b ^ a!=b));
	printf("\n a!=b ^ a!=b = %d ",!(a!=b ^ a!=b));
}