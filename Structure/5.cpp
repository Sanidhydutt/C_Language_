#include<stdio.h>
#include<string.h>
struct ss
{
	char name[10];
	int id;
};
int main()
{
	struct ss s1;
	
	s1.id = 1;
	
	strcpy(s1.name,"Sanidhy");
	
	printf("\n Name = %s",s1.name);
	printf("\n id = %d",s1.id);

}
