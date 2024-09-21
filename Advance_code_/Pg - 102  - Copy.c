#include<stdio.h>
int main(){
    int a,b,c;
    printf(" \n Enter a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("\n %d is Greater number than %d %d ",a,b,c);
        }
    else if(b>c)
    {
        printf("\n %d is greater number than %d and %d ",b,a,c);
    }
    else
    {
        printf("\n %d is greatest number than %d and %d ", c,a,b);
    }
    return 0;
}
