#include<stdio.h>
int main(){
    int i,n,m,k=0;
    scanf("%d%d",&n,&m);
    if(n<m){
        for(i=1;i<=m;i++){
            if(n%i==0 && m%i==0){
                k=i;
            }
        }
    }
    else{
         for(i=1;i<=n;i++){
            if(n%i==0 && m%i==0){
                k=i;
            }
        }
    }
    printf("%d",k);
}