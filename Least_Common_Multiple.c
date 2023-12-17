#include<stdio.h> 
int main() {
    int i,n,m,k;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
        k=m*i;
        if(k%n==0){
            break;
        }
    }
    printf("%d",k);
}