#include<stdio.h>
int main()
{
  int i,a[5] [5],j,t,n;
  printf("\n Matrix or 2D-array \n ");
  printf("\n Enter row and column range \n ");
  scanf("%d",&n);
  printf("\nEnter 2D-array value");
for(i=0;i<n;i++)

  {
    for(j=0;j<n;j++)
  { scanf("%d", &a[i] [j]);
  }
  }
  printf("\n Print Matrix or 2-d array:\n **********\n");
  for(i=0;i<n;i++)

  {
    for(j=0;j<n;j++)
    {
     printf("a[%d] [%d] = %d\t",i,j,a[i][j]);
}
   printf("\n");
  }
    return 0;
}
