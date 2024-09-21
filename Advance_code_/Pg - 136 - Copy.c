#include<stdio.h>
int main()
{
    int i,a[] = {10,20,30,40,50};

 printf("\n Printing array using loop \n");
    for(i=0;i<5;i++)
    {
        printf("a[%d]=%d\n", a[i]);
    }

    printf("\n Memory address of the array \n");
    for(i=0;i<5;i++)

    {
        printf("------> Address of a[%d]=%u\n",i, &a[i]);
    }
    return 0;
}
