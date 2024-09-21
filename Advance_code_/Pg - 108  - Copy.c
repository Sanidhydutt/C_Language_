#include<stdio.h>
int main()
{

    int a,b,c;
    printf("\n Enter a,b,c");
    scanf("%d %d %d", &a,&b,&c);
    printf("\n Conditional operators \n ******\n");

    (a>b && a>c)  ?
    printf("Greater number = %d ",a): (b>c)? printf("Greater number = %d",b): printf("Greater number = %d",c);


    return 0;
}
