#include<stdio.h>
union stu{
//over load function

char b;

};

int main()
{
    union stu s;
    s.b =94;
    printf("%c",s.b);

    return 0;
}
