#include<stdio.h>
int main(){
    int n,x,u;
    scanf("%d%d",&n,&x);
    u=(x*(x+1))/2;
    if(n>=u){
        printf("YES");
    }
    else{
        printf("NO");
        
    }
}