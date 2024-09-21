#include<stdio.h>
struct student
{
	int rl;
	char name[15];
}s1,s2;
int main()
{
	printf("\nEnter the rl number of s1");
	scanf("%d",&s1.rl);
	printf("\nEnter the Name s1");
	scanf("%s",&s1.name);
	
	printf("\nEnter the rl number of s2");
	scanf("%d",&s2.rl);
	printf("\nEnter the Name s2");
	scanf("%s",&s2.name);
	
	printf("\n ********Student Details********* \n");
	
	printf("\n Student 1 ->\t Rollnum - %d \t Name = %s",s1.rl,s1.name);
	printf("\n Student 2 ->\t Rollnum - %d \t Name = %s",s2.rl,s2.name);

}