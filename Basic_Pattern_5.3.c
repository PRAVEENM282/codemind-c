#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        for(int k=n-i;k>0;k--){
            printf("*");
        }
        printf("
");
    }
}