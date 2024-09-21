#include<stdio.h>
int main()
{

 int i,n,a[5],m,p,j;
 printf("\n Enter size of the array");
 scanf("%d", &n);
 printf("\n Enter numbers");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);

 }
    printf("\n Printing array using loop \n");
for(i=0;i<n;i++)

    {printf("a[%d] =%d\n",i, a[i]);}

    printf("\n Accessing elements \n");
    m = a[0];
    printf("\n First element of array = %d",m);

    printf("\n Enter index / subscript value that you want to access");
    scanf("%d , &j");
    p=a[j];
   printf("/n request element of array = %d",p);

    return 0;
}
