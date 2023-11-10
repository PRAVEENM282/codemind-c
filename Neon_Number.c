#include<stdio.h>
#include<math.h>
int main(){
    int n,p,f,s=0;
    scanf("%d",&n);
     p=pow(n,2);
    while(p){
        f=p%10;
        s=s+f;
        p=p/10;
    }
    if(n==s){
        printf("Neon Number");
    }
    else {
        printf("Not Neon Number");
    }
}