#include<stdio.h>
int main()
{
	int r,c,rsum,i,j;
	scanf("%d%d",&r,&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<r;j++)
	{
		rsum=0;
		for(i=0;i<c;i++)
		{
		   rsum=rsum+a[j][i];
		}
		printf("%d ",rsum);
	}
}