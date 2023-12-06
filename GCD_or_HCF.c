#include<stdio.h>
int main() {
    int i,n,m,a,lar=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
    if(n%i==0 && m%i==0)
    a=i;
    else
    a=0;
    if(a!=0)
    {
        if(lar<=a)
            lar=a;
    }
    }
    printf("%d",lar);
}