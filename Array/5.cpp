#include<stdio.h>
int main()
{
	int a[2][2][2];
	int i,j,k;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("\n Enter the value of a");
				scanf("%d",&a[i][j][k]);
			}
		}
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++) 
			{
				printf("\n a[%d][%d][%d] = %d",i,j,k,a[i][j][k]);
			}
		}
	}
}