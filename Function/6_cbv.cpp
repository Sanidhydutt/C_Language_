#include<stdio.h>
int swap(int x,int y)
{
	int swap;
	
	swap = x;
	x = y;
	y = swap;
	
	printf("\n a = %d \t b = %d",x,y);

}
int main()
{
	int a,b;
	printf("\nEnter the value of a");
	scanf("%d",&a);
	
	printf("\nEnter the value of b");
	scanf("%d",&b);
	
	printf("\n Before Swap");
	printf("\n a = %d \t b = %d",a,b);
	
	printf("\n After Swap");
	swap(a,b);
	
	printf("\n After function ");
	printf("\n a = %d \t b = %d",a,b);
}