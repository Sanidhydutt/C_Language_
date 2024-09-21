#include<stdio.h>
struct com
{
	char cname[10];
	struct dep
	{
		char dname[10];
	}d1;
}c1;
int main()
{
	printf("Enter the company manager name");
	scanf("%s",&c1.cname);
	
	printf("Enter the company depratment manager name");
	scanf("%s",&c1.d1.dname);
	
	printf("\n cname = %s \t dname = %s",c1.cname,c1.d1.dname);
}