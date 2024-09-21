#include<stdio.h>
int main()

{
    int i,n,fact =1;
    printf("\n Enter any number =");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("\n fact = %d * %d",fact,i);
        fact = fact *i;
    }
    printf("\n \n Factorial of given number = %d",fact);



    return 0;
}
