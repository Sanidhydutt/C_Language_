#include<stdio.h>
int main()
{

  int A[20],N,Temp,i,j;
  printf("ENTER THE NUMBRERS OF TERMS..... \n");
  scanf("%d",&N);
  printf("ENTER THE ELEMENTS OF THE ARRAY..... \n");
  for(i=1;i<=N;i++)
{

  scanf("%d",&A[i]);
}
  for(i=1;i<=N-1;i++)
  for(j=i+1;j<=N;j++)
  if(A[i]>A[j])

{
  Temp = A[i];
  A[i] = A[j];
  A[j] = Temp;
}

printf("THE ASCENDING ORDER LIST IS....");
 for(i=1;i<=N;i++)
printf("\n%d",A[i]);
}
