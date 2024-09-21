#include<stdio.h>
int main()

{
    char ch;
    int age;

    printf("\n Enter either M or F =");
    scanf("%c", &ch);
    printf("\n Enter age =");
    scanf("%d",&age);

    if (ch == 'F')
    {

        if (age >=18)

            printf("\n Girl is eligible for marriage");

            else
            printf("\n girl is not eligible for marriage");
    }



    {
        if (age >=21)

            printf("\n Boy is eligible for marriage");

            else
            printf("\n Boy is not eligible for marriage");

    }

    return 0;
}
