#include<stdio.h>
void aa(int a) // thats call parametrs
{
	printf("\n a = %d ",a);
}
int bb(int b)
{
	return b;
}
int main()
{
	aa(10); // thats an argument ok
	printf("\n %d",bb(20));
}