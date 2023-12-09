#include<stdio.h>
int main(){
    int n,i,S=0,s=0,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        S=S+(i*i);
        s=s+i;
    }
    if((s*s)>S)
    d=(s*s)-S;
    else
    d=S-(s*s);
    printf("%d",d);
}