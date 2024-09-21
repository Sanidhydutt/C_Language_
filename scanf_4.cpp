#include<stdio.h>
int main ()
{
	int i,j,k;
	printf("\n reading and writing numbers");
	printf("\n enter only one number");
	scanf("%d", &i); // reading number from the keyboard
	printf("\n entered number = %d", i);
	printf("\n enter two number");
	scanf("%d %d", &j, &k); // reading 2 number from the keyboard
	printf("\n j = %d \n k = %d", j,k);
}