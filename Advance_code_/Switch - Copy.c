#include<stdio.h>
int main()
{
    int a=25;
    int b=30;

    switch(a)

    {
    case 10:
        printf("This is part of outer switch\n",a);
     switch(b)
    {
     case 20:
        printf("This is part of inner switch\n",a);

    }
    }

    printf("Exact value of a is: %d\n",a);
    printf("Exact value of b is: %d\n",b);
    return 0;
}
