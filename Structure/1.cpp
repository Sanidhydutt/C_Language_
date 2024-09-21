#include<stdio.h>
struct stu
{
	int rl;
	char name[10];
};
int main()
{
	struct stu s1 = {21,"Sanidhy"};
	struct stu s2 = {11,"Purvi"};

	printf("s1 rl = %d",s1.rl);
	printf("\ns1 name = %s",s1.name);
	
	printf("\ns2 rl = %d",s2.rl);
	printf("\ns2 name = %s",s2.name);
	
}