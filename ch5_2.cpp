#include<stdio.h>
int main()
{
	//assignment
	int a,b;
	
	printf("Enter the value of a,b");
	scanf("%d %d",&a,&b);
	printf("\n a = %d \t b = %d",a,b);
	
	a+=b;
	printf("\n a+b=%d ",a);
	a-=b;
	printf("\n a-b=%d ",a);
	a*=b;
	printf("\n a*b=%d ",a);
	a/=b;
	printf("\n a/b=%d ",a);
	a%=b;
	printf("\n a%%b=%d ",a);
	
	
}
