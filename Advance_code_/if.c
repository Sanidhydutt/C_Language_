#include<stdio.h>
int main()
{
    char hi;
    printf("\n checking vowels using if statement");
    printf("\n Enter character");
    scanf("%c",&hi);
    printf("***********");
    if (hi=='a'&&'e'&&'i'&&'u')
    {
        printf("\n character is vowel\n");
    }

    return 0;
}
