#include<stdio.h>
int main(){
    int  x,y,p,u;
    scanf("%d%d%d",&x,&y,&p);
    if(x>y){
        u=x-y;
    }
    else {
        u=y-x;
    }
    if(u%(2*p)==0){
        printf("YES");
    }
    else {
        printf("NO");
    }
}