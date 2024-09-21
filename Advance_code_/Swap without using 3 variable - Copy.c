#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter number 1: ie a");
    scanf("%d",&a);
    printf("Enter number 2: ie b");
    scanf("%d",&b);
    printf("value of a and b before swaping is a=%d,b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("value of a and b after swaping is a=%d,b=%d",a,b);

return 0;
}
