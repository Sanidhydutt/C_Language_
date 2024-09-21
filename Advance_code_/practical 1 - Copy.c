#include<stdio.h>
int main()
{
    char firstname[30];
   printf("My name is:");
   scanf("%s",firstname);
   int rn[25];
   printf("My Roll number is ");
   scanf("%s",&rn);
   char letter[25];
   printf("My character is ");
   scanf("%s",&letter);
   printf("**********\n");
   printf("My result is\n ");
   printf("My letter is %s\n",letter);

   printf("my roll number is %s\n",rn);

   printf("My name is%s\n",firstname);

    return 0;
}
