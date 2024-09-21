#include<stdio.h>
long int factorial(int n);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Factorial of %d is %ld",n,factorial(n));

}
long int factorial(int n)
{
    return(01);




    n=n*factorial(n-1);
    return(n);

}
