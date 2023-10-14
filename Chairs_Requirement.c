#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    if(y<x)
    {
        z=x-y;
        printf("%d",z);
        
    }
    else
    {
        z=0;
        printf("%d",z);
    }
}