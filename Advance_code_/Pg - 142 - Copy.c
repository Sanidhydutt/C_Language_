#include<stdio.h>
int main()
{

    int i,j;
    int b[2] [3] = {{10,20,30} , {40,50,60}};

    printf("\n Matrix or 2-d array: \n ********* \n");
    for(i=0;i<2;i++)
    {
       for(j=0;j<3;j++)
    {
        printf("b[%d] [%d] = %d\t",i,j,b[i][j]);
    }
     printf("\n");}
    return 0;
}
