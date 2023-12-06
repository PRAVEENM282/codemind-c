#include<stdio.h>
int main()
{
    int i,n;
    float f=0,d,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        d=k/i;
        f=f+d;
    }
    printf("%.2f",f);
}