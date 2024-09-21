#include<stdio.h>
int main()
{

    int a,b;
    char oper;
    printf("SIMPLE CALCULATOR\n");
    printf("Enter a value :\n");
    scanf("%d",&a);

    printf("Enter b value :\n");
    scanf("%d",&b);

    printf("Enter oper from '+' '-' '*' '%'\n");
    scanf(" %c",&oper);

    switch(oper)

    {
      case '+':
      printf("%d + %d =%d\n",a,b,a+b);
      break;

      case '-':
      printf("%d - %d =%d\n",a,b,a-b);
      break;

      case '*':
      printf("%d * %d =%d\n",a,b,a*b);
      break;

      case '%':
      printf("%d % %d =%d\n",a,b,a%b);
      break;

      default:
      printf("Invalid Entry\n");






}
  return 0;
}
