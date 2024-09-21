#include<stdio.h>
   int main()
{
  int n,max,num,c;
  printf("Enter the number for random number you want");
  scanf("%d",&n);
  printf("Enter the maximum value of random number");
  scanf("%d",&max);
  printf("%d random numbers from 0 to %d are :\n",n,max);
  randomize();
  for (c=1;c<=n;c++)
{
  num =random(max);
  printf("%d\n",num);

}
  return 0;
}
