#include<stdio.h>
//with argument with return
int aa(int a)
{
	printf("\n here is return value:");
	return a;
}
//with arguemnet no return
void bb(int b)
{
	printf("\n value of b = %d",b);
}
//no argumnet with return
int cc()
{
	printf("\n im no arguemnt with return Function ");
	return 0;
}
//no argument no return
void dd()
{
	printf("\n im no argument no return Function");
}
int main()
{
	printf("\n %d",aa(10));
	bb(2);
	cc();
	dd();
}