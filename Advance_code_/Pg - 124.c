#include<stdio.h>
int main()
{
    int k=1,n,m;
    printf("\n Use of break statement during looping \n *******\n");
    printf("\n Enter loop value = ");
    scanf("%d", &m);
    printf("\n Enter number to break the loop = ");
    scanf("%d", &n);
    while (k<m)
    {
        printf("\n k = %d",k);
        k++;
        if(k == n)
        break;

    }
    printf("\n Loop break on %d...",n);

    return 0;
}
