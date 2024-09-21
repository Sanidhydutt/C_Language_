#include<stdio.h>
int main()
/*{
    int n;
    printf("Enter an integer =");
    scanf("%d",&n);
    if (n%2==0)
    printf("Even\n");
    else
    printf("Odd");

    return 0;
}*/

{
    int x,y,temp;
    printf("Enter the value of x and y");
    scanf("%d%d",&x,&y);
    printf("Before Swapping x =%d y =%d",x,y);
    temp = x;
    x=y;
    y=temp;
    printf("\nAfter Swapping x =%d y =%d",x,y);

    return 0;


}
